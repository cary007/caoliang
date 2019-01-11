void register_extension(struct plugin *plugin)
{
	plugin->parent = &nvme;

	nvme.extensions->tail->next = plugin;
	nvme.extensions->tail = plugin;
}

static int disconnect_cmd(int argc, char **argv, struct command *command, struct plugin *plugin)
{
	const char *desc = "Disconnect from NVMeoF subsystem";
	return disconnect(desc, argc, argv)
}
