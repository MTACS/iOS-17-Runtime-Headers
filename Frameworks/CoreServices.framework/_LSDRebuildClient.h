
@interface _LSDRebuildClient : _LSDClient <_LSDRebuildServiceProtocol>

- (id)initWithXPCConnection:(id)arg1;
- (void)noteMigratorRunningWithReply:(id /* block */)arg1;
- (void)performRebuildRegistration:(id)arg1 personaUniqueStrings:(id)arg2 reply:(id /* block */)arg3;

@end
