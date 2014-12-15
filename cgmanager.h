struct cgm_keys {
	char *name;
	uint32_t uid, gid;
	uint32_t mode;
};

bool cgm_get_controllers(char ***contrls);
bool cgm_list_keys(const char *controller, const char *cgroup, struct cgm_keys ***keys);
bool cgm_list_children(const char *controller, const char *cgroup, char ***list);
char *cgm_get_pid_cgroup(pid_t pid, const char *controller);
bool cgm_get_value(const char *controller, const char *cgroup, const char *file,
		char **value);
bool cgm_set_value(const char *controller, const char *cgroup, const char *file,
		const char *value);
bool cgm_create(const char *controller, const char *cg, uid_t uid, gid_t gid);

bool cgm_chown_file(const char *controller, const char *cg, uid_t uid, gid_t gid);

#if 0
bool cgm_chown(const char *controller, const char *cg, uid_t uid, gid_t gid);
bool cgm_remove(const char *controller, const char *cg);
#endif

bool cgm_escape_cgroup(void);
