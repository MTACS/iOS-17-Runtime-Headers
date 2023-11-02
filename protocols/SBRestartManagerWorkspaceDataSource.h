
@protocol SBRestartManagerWorkspaceDataSource <NSObject>

@required

- (NSString *)activePrimaryApplicationBundleID;
- (bool)isUILocked;
- (void)terminateAllApplicationsForReason:(void *)arg1 description:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
