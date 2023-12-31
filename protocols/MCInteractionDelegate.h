
@protocol MCInteractionDelegate <NSObject>

@required

- (void)profileConnection:(MCProfileConnection *)arg1 didFinishInstallationWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)profileConnection:(MCProfileConnection *)arg1 didFinishPreflightWithError:(NSError *)arg2;
- (void)profileConnection:(MCProfileConnection *)arg1 didRequestMAIDSignIn:(NSString *)arg2 personaID:(NSString *)arg3;
- (void)profileConnection:(MCProfileConnection *)arg1 didRequestManagedRestoreWithManagedAppleID:(NSString *)arg2 personaID:(NSString *)arg3;
- (void)profileConnection:(MCProfileConnection *)arg1 didRequestUserInput:(NSArray *)arg2;
- (void)profileConnection:(MCProfileConnection *)arg1 didShowUserWarnings:(NSArray *)arg2;
- (void)profileConnectionDidRequestCurrentPasscode:(MCProfileConnection *)arg1;

@optional

- (void)profileConnection:(MCProfileConnection *)arg1 didBeginInstallingNextProfile:(MCProfile *)arg2;
- (void)profileConnection:(MCProfileConnection *)arg1 didUpdateStatus:(NSString *)arg2;

@end
