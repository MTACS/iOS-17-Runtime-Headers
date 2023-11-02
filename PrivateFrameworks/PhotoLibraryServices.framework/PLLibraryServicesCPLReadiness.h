
@interface PLLibraryServicesCPLReadiness : NSObject {
    bool  _isReadyForCPL;
    PLLibraryServicesManager * _libraryServicesManager;
    NSMutableArray * _photoLibraryCPLReadinessBlocks;
    NSObject<OS_dispatch_source> * _photoLibraryCPLReadinessTimer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    NSString * _statusMessage;
}

- (void).cxx_destruct;
- (void)_callOutstandingCPLReadinessBlocks;
- (bool)_checkForCPLReadinessAndCallBlocks;
- (void)_checkIsReadyForCloudPhotoLibrary;
- (bool)_isAssetsdReadyForCPLManagerWithStatus:(id*)arg1;
- (bool)_isReadyForCloudPhotoLibraryWithStatus:(id*)arg1;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (void)_stopWaitingForCPLReadiness;
- (void)_updateIsReady:(bool)arg1 statusMessage:(id)arg2;
- (void)cancelCPLReadinessBlocksAndStopWaiting;
- (id)initWithLibraryServicesManager:(id)arg1;
- (void)invalidate;
- (bool)isReadyForCloudPhotoLibraryWithStatus:(id*)arg1;
- (id)libraryServicesManager;
- (void)pauseCloudPhotos:(bool)arg1 reason:(short)arg2;
- (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)arg1;
- (void)processCloudPhotosLibraryStateChange:(bool)arg1;

@end
