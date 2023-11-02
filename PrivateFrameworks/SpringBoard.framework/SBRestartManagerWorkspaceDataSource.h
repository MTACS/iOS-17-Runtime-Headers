
@interface SBRestartManagerWorkspaceDataSource : NSObject <SBRestartManagerWorkspaceDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)activePrimaryApplicationBundleID;
- (bool)isUILocked;
- (void)terminateAllApplicationsForReason:(long long)arg1 description:(id)arg2 completion:(id /* block */)arg3;

@end
