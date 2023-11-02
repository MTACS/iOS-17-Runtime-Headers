
@protocol BKSAlternateSystemAppClientProtocol <NSObject>

@required

- (void)alternateSystemAppWithBundleID:(NSString *)arg1 didExitWithContext:(RBSProcessExitContext *)arg2;
- (void)alternateSystemAppWithBundleID:(NSString *)arg1 failedToOpenWithResult:(NSError *)arg2;
- (void)alternateSystemAppWithBundleIDDidOpen:(NSString *)arg1;
- (void)alternateSystemAppWithBundleIDDidTerminate:(NSString *)arg1;
- (void)didBlockSystemAppForAlternateSystemApp;
- (void)didUnblockSystemAppForAlternateSystemApp;

@end
