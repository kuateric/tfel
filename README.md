# Description

`TFEL` is a collaborative development of CEA and EDF.

`MFront` is a code generator which translates a set of closely related
domain specific languages into plain C++ on top of the `TFEL`
library. Those languages covers three kind of material knowledge:

- material properties (for instance the
  Young modulus, the thermal conductivity, etc.)
- mechanical behaviours. Numerical performances of generated
  mechanical behaviours was given a particular attention. MFront
  offers a variety of interfaces to finite element solvers `Cast3M`,
  `Code-Aster`, `EUROPLEXUS`, `Abaqus-Standard`, `Abaqus-Explicit`,
  `Zebulon`, etc.. or various FFT solvers such as
  `AMITEX_FFTP`. Various benchmarks shows that `MFront`
  implementations are competitive with native implementations
  available in the `Cast3M`, `Code-Aster` and `Cyrano3` solvers.
- simple point-wise models, such as material swelling
  used in fuel performance codes.

`MFront` comes with an handy easy-to-use tool called `MTest` that can
test the local behaviour of a material, by imposing independent
constraints on each component of the strain or the stress. This tool
has been much faster (from ten to several hundred times depending on
the test case) than using a full-fledged finite element solver.

# Licences

`TFEL` version prior to 0.1 were released under both the LGPL and the
CECILL-B licences. A copy of those licences are included in the
distributions of TFEL.

`TFEL` versions 1.x were developped by CEA within the PLEIADES
project. Since svn revision 584, TFEL was part of the `PLEIADES`
projet.

Starting from versions 2.x, TFEL has been publicly released under
either the GPL or the CECILL-A licence. A copy of thoses licences are
delivered with the sources of TFEL. CEA or EDF may also distribute
this project under specific licensing conditions.

Copyright (C) 2006-2013 CEA/DEN. All rights reserved. 
Copyright (C) 2014-2015 CEA/DEN, EDF R&D. All rights reserved. 

# How to cite `TFEL/MFront`

If you use `TFEL/MFront` in your research, please cite the following
paper:

~~~~~~~~~
@article{helfer_introducing_2015,
	title = {Introducing the open-source mfront code generator: Application to mechanical behaviours and material knowledge management within the {PLEIADES} fuel element modelling platform},
	volume = {70},
	issn = {0898-1221},
	url = {http://www.sciencedirect.com/science/article/pii/S0898122115003132},
	doi = {10.1016/j.camwa.2015.06.027},
	shorttitle = {Introducing the open-source mfront code generator},
	pages = {994--1023},
	number = {5},
	journaltitle = {Computers \& Mathematics with Applications},
	shortjournal = {Computers \& Mathematics with Applications},
	author = {Helfer, Thomas and Michel, Bruno and Proix, Jean-Michel and Salvo, Maxime and Sercombe, Jérôme and Casella, Michel},
	urldate = {2016-09-22},
	date = {2015-09},
	keywords = {Domain specific languages, Implicit integration schemes, Material knowledge management, Mechanical behaviour integration, Single crystal plasticity},
}
~~~~~~~~~

# Current versions

The latest official version is `TFEL-4.0.0`.  It is built upon the
`C++-17` standard.

The stable development branch is called `rliv-4.0`. It is the
recommended branch for most users.

The current `master` branch will become `TFEL-4.1.0`.

# Timeline

12/2016 TFEL-3.0.0/
04/2017 TFEL-3.0.1/
11/2017 TFEL-3.0.2/

12/2017 TFEL-3.0.3/
12/2017 TFEL-3.1.0/

03/2018 TFEL-3.1.1/
05/2018 TFEL-3.1.2/
11/2018 TFEL-3.1.3/

04/2019 TFEL-3.0.4/
04/2019 TFEL-3.1.4/
04/2019 TFEL-3.2.0/
04/2019 TFEL-3.2.1/

12/2019 TFEL-3.0.5/
12/2019 TFEL-3.1.5/
12/2019 TFEL-3.2.2/
12/2019 TFEL-3.3.0/

09/2020 TFEL-3.0.9/
09/2020 TFEL-3.1.9/
09/2020 TFEL-3.2.6/
09/2020 TFEL-3.3.2/
09/2020 TFEL-3.4.0/

10/2020 TFEL-3.0.10/
10/2020 TFEL-3.1.10/
10/2020 TFEL-3.2.7/
10/2020 TFEL-3.3.3/
10/2020 TFEL-3.4.3/
10/2020 TFEL-4.0.0/
