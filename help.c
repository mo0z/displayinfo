/**
 * DisplayInfo (info on display)
 * Copyright (C) 2017 Vitali Baumtrok
 *
 * This file is part of DisplayInfo.
 *
 * DisplayInfo is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * DisplayInfo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with DisplayInfo.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <stdio.h>

extern int args_is_help();
extern int args_is_copyright();
extern int args_is_version();
extern int args_is_resolution();
extern int args_is_server();
extern int args_is_resolution();
extern int args_is_server();


static void help_print_help() {
	printf("Usage:       displinfo OPTION\n");
	printf("OPTIONs:\n");
	printf("  help        prints this help\n");
	printf("  version     prints version\n");
	printf("  copyright   prints copyright and copying conditions\n");
	printf("  resolution  prints current screen id and its resolution\n");
	printf("  server      prints the default X server connection string\n");
}

static void help_print_version() {
	printf("0.1.0\n");
}

static void help_print_copyright() {
	printf("Copyright (C) 2017 Vitali Baumtrok\n");
	printf("This program is free software: you can redistribute it and/or modify\n");
	printf("it under the terms of the GNU General Public License as published by\n");
	printf("the Free Software Foundation, either version 3 of the License, or\n");
	printf("(at your option) any later version.\n");
}

static void help_print_resolution() {

}

static void help_print_server() {

}


/* ************************* */
/*    exported functions     */
/* ************************* */

void help_print_hint() {
	printf("Use \"displayinfo help\" for valid arguments.\n");
}

void help_print() {
	if (args_is_help()) {
		help_print_help();

	} else if (args_is_version()) {
		help_print_version();

	} else if (args_is_copyright()) {
		help_print_copyright();

	} else if (args_is_resolution()) {
		help_print_resolution();

	} else if (args_is_server()) {
		help_print_server();
	}
}

