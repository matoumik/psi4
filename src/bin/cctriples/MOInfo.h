/*! \file
    \ingroup CCTRIPLES
    \brief Enter brief description of file here 
*/

namespace psi { namespace CCTRIPLES {

struct MOInfo {
  int nirreps;        /* no. of irreducible representations */
  int nmo;            /* no. of molecular orbitals */
  int iopen;          /* 0=closed shell; >0=open shell */
  int phase;          /* Boolean for consistency of orbital phases */
  int *orbspi;        /* no. of MOs per irrep */
  int *clsdpi;        /* no. of closed-shells per irrep excl. frdocc */
  int *openpi;        /* no. of open-shells per irrep */
  int *uoccpi;        /* no. of unoccupied orbitals per irrep excl. fruocc */
  int *frdocc;        /* no. of frozen core orbitals per irrep */
  int *fruocc;        /* no. of frozen unoccupied orbitals per irrep */
  char **labels;      /* irrep labels */
  int *occpi;            /* no. of occupied orbs. (incl. open) per irrep */
  int *aoccpi;           /* no. of alpha occupied orbs. (incl. open) per irrep */
  int *boccpi;           /* no. of beta occupied orbs. (incl. open) per irrep */
  int *virtpi;           /* no. of virtual orbs. (incl. open) per irrep */
  int *avirtpi;          /* no. of alpha virtual orbs. (incl. open) per irrep */
  int *bvirtpi;          /* no. of beta virtual orbs. (incl. open) per irrep */
  int *occ_sym;       /* relative occupied index symmetry */
  int *aocc_sym;         /* relative alpha occupied index symmetry */
  int *bocc_sym;         /* relative beta occupied index symmetry */
  int *vir_sym;       /* relative virtual index symmetry */
  int *avir_sym;         /* relative alpha virtual index symmetry */
  int *bvir_sym;         /* relative beta virtual index symmetry */
  int *occ_off;       /* occupied orbital offsets within each irrep */
  int *aocc_off;       /* alpha occupied orbital offsets within each irrep */
  int *bocc_off;       /* beta occupied orbital offsets within each irrep */
  int *vir_off;       /* virtual orbital offsets within each irrep */
  int *avir_off;       /* alpha virtual orbital offsets within each irrep */
  int *bvir_off;       /* beta virtual orbital offsets within each irrep */
  int iter;           /* Current lambda iteration */
  double conv;        /* Current convergence level */
  double enuc;        /* Nuclear repulsion energy */
  double escf;        /* SCF energy from chkpt */
  double eref;        /* Reference energy (file100) */
  double ecc;         /* CC energy from ccenergy */
};

}} // namespace psi::CCTRIPLES
