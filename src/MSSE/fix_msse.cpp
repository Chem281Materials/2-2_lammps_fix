/* ----------------------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   https://www.lammps.org/ Sandia National Laboratories
   LAMMPS development team: developers@lammps.org

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#include "fix_msse.h"

using namespace LAMMPS_NS;
using namespace FixConst;

/* ---------------------------------------------------------------------- */

FixMSSE::FixMSSE(LAMMPS *lmp, int narg, char **arg) :
    Fix(lmp, narg, arg)
{
}

/* ---------------------------------------------------------------------- */

FixMSSE::~FixMSSE()
{
}

/* ---------------------------------------------------------------------- */

int FixMSSE::setmask()
{
  int mask = 0;
  mask |= POST_FORCE;
  return mask;
}

/* ---------------------------------------------------------------------- */

void FixMSSE::init()
{
}

/* ---------------------------------------------------------------------- */

void FixMSSE::post_force(int vflag)
{
}

