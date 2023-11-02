
@interface PLCameraPreviewWellManager : NSObject {
    bool  _active;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activeLock;
    NSDate * _currentPreviewWellAddedDate;
    NSString * _currentPreviewWellAssetUUID;
    bool  _currentPreviewWellMetadataIsLoaded;
    double  _currentPreviewWellSortToken;
    PLLibraryServicesManager * _lsm;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _queueLock;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableArray * _workQueue;
}

- (void).cxx_destruct;
- (void)_clearPreviewWellAndNotify;
- (void)_fetchPreviewWellAssetWithAssetHandler:(id /* block */)arg1;
- (void)_inqFetchPreviewWellMetadataIfNeededCurrentPreviewIsStale:(bool*)arg1;
- (void)_inqProcessAssetChanges;
- (void)_processChange:(id)arg1;
- (void)_saveImageAndNotify:(struct CGImage { }*)arg1 assetUUID:(id)arg2;
- (void)considerAssetForPreviewWellChanges:(id)arg1 thumbnailWasGenerated:(bool)arg2;
- (id)initWithLibraryServicesManager:(id)arg1;
- (void)refreshPreviewWellImage;

@end
