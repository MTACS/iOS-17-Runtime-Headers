
@interface CHActivityApplicationInstallationManager : NSObject <HDNanoSyncManagerObserver, HDProfileReadyObserver> {
    bool  _installationRequestInProgress;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    ASDSystemAppRequest * _systemAppRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationsInstalled:(id)arg1;
- (void)_applicationsUninstalled:(id)arg1;
- (void)_cleanupInstallRequest;
- (void)_queue_cleanupInstallRequest;
- (void)_queue_requestActivityAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)arg1;
- (void)_queue_startInstalling;
- (void)_requestActivityAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)arg1;
- (void)_setAndNotifyStickersAvailable:(bool)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)nanoSyncManager:(id)arg1 pairedDevicesChanged:(id)arg2;
- (void)profileDidBecomeReady:(id)arg1;

@end
