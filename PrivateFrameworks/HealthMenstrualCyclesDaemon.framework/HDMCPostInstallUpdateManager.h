
@interface HDMCPostInstallUpdateManager : NSObject <HDHealthDaemonReadyObserver, HDPostInstallUpdateTaskHandler> {
    HDMCProfileExtension * _profileExtension;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_triggerInitialAnalysisWithError:(id*)arg1;
- (bool)_updateDeviceScopedStorageWithError:(id*)arg1;
- (void)daemonReady:(id)arg1;
- (id)initWithProfileExtension:(id)arg1;
- (void)performPostInstallUpdateTaskForManager:(id)arg1 completion:(id /* block */)arg2;

@end
