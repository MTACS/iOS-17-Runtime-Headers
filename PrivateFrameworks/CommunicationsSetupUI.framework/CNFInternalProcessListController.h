
@interface CNFInternalProcessListController : PSListController

- (id)bundle;
- (void)conferenceKillProcesses:(id)arg1;
- (void)conferenceKillProcessesAndNukeKeychain:(id)arg1;
- (void)killJustIChatAgent:(id)arg1;
- (void)killJustIMAVAgent:(id)arg1;
- (void)killJustMediaServerD:(id)arg1;
- (id)specifiers;

@end
