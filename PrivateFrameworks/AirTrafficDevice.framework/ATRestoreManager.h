
@interface ATRestoreManager : NSObject <ATRestoreAssetLinkDelegate, ATSessionObserver, ICEnvironmentMonitorObserver> {
    ATRestoreAssetLink * _applicationDataRestoreLink;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _cancelled;
    NSObject<OS_dispatch_queue> * _checkRestoreStatusQueue;
    bool  _deviceRestoreActive;
    bool  _iCloudRestoreActive;
    bool  _iTunesRestoreActive;
    NSObject<OS_dispatch_queue> * _queue;
    ATRestoreAssetLink * _restoreLink;
    ATSession * _restoreSession;
    ATDeviceSettings * _settings;
    MSVXPCTransaction * _xpcTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_checkActiveRestoreStateWithCompletion:(id /* block */)arg1;
- (id)_dataClasses;
- (bool)_iCloudPhotoLibraryEnabled;
- (void)_start;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (bool)hasProperNetworkConditions;
- (id)init;
- (void)restoreAssetLinkDidCancelRestore:(id)arg1;
- (void)restoreAssetLinkNetworkPolicyDidChange:(id)arg1;
- (void)restoreSessionActiveWithCompletion:(id /* block */)arg1;
- (void)resume;
- (void)sessionDidFinish:(id)arg1;
- (void)setRestoreInProgress:(bool)arg1;

@end