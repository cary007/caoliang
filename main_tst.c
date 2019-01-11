int main(int argc, char **argv)
{
	int ret;

	nvme.extensions->parent = &nvme
	if (argc < 2) {
		general_help(&builtin);
		return 0;
	}
	setlocale(LC_ALL, "");

	ret = handle_plugin(argc - 1, &argv[1], nvme.extensions);
	if (ret == -ENOTTY)
    general_help(&builtin);

}
