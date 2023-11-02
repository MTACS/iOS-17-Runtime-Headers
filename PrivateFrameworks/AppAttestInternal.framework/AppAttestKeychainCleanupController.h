
@interface AppAttestKeychainCleanupController : NSObject <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_registerActivity;
- (void)_updateActivityCriteria:(id*)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)start;

@end
