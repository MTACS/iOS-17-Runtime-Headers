
@interface NTKGreenfieldCompanionAppInstallationMonitor : NSObject <LSApplicationWorkspaceObserverProtocol, NTKFaceCollectionObserver> {
    bool  _hasReloadedSinceObserving;
    bool  _isObservingApplicationWorkspace;
    bool  _isObservingWatchApps;
    bool  _isRunning;
    NTKFaceCollection * _library;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)_existingPlaceholderItemIds;
- (id)_queue_calculatePendingRemovalItemIdsWithExistingPlaceholderIds:(id)arg1;
- (id)_queue_fetchInstalledWatchAppsItemIds;
- (id)_queue_fetchNotInstalledWatchAppStatus;
- (void)_reloadInstallingAppsOnPhoneAndWatch;
- (void)_removePlaceholderComplicationWithItemIds:(id)arg1;
- (void)_toggleObserving;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)dealloc;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)fetchInstalledAppsOnWatchWithCompletionBlock:(id /* block */)arg1;
- (void)handleAddFaceManagerDidUpdateFaceLibrary;
- (id)init;
- (void)start;

@end
