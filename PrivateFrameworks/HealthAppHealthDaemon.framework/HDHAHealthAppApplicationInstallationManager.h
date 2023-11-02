
@interface HDHAHealthAppApplicationInstallationManager : NSObject <HDHealthDaemonReadyObserver, HDNanoSyncManagerObserver, HDProfileManagerObserver> {
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
- (void)_cleanupInstallRequest;
- (void)_queue_cleanupInstallRequest;
- (void)_queue_installHealthAppIfTinkerProfileExists;
- (void)_queue_requestHealthAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)arg1;
- (void)_queue_startInstalling;
- (void)_requestHealthAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)nanoSyncManager:(id)arg1 pairedDevicesChanged:(id)arg2;
- (void)profileListDidChange;

@end
