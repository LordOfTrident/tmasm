#include "app.h"

int main(int p_argc, char **p_argv) {
	app_t app = {0};
	app_read_args(&app, p_argc, p_argv);

	app_compile(&app);

	return 0;
}
