﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Rovolution.Server.Objects {

	[Flags()]
	public enum EItemEquipRestriction {
		RestrictionPvp = 1,
		RestrictionGvg = 2,
		RestrictionBoth = RestrictionPvp | RestrictionGvg,

		// Zones
		Area1 = 4,
		Area2 = 8,
		Area3 = 16,
		Area4 = 32,
		Area5 = 64,
		Area6 = 128,
		Area7 = 256
	}

}
