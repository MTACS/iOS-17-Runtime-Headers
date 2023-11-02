
@interface PLIndicatorFileCoordinator : NSObject {
    int  _activityIndicatorFid;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activityIndicatorLock;
    PLPhotoLibraryPathManager * _pathManager;
    NSString * _resourceHoldingDirectoryPath;
}

+ (void)setSystemLibraryAvailableIndicatorState:(bool)arg1;
+ (bool)systemLibraryAvailableIndicatorState;

- (void).cxx_destruct;
- (bool)_canSetPauseMarkerWithUnpauseTime:(id)arg1 onPauseData:(id)arg2;
- (void)_createPauseMarkerForReason:(short)arg1 withUnpauseTime:(id)arg2 withPath:(id)arg3;
- (id)_pauseDataOnPath:(id)arg1;
- (id)_readPListWithFilename:(id)arg1;
- (id)_rebuildingPersonsIndicatorFilePath;
- (void)_setActivityIndicatorWithPath:(id)arg1 flag:(bool)arg2 crashRecovery:(id /* block */)arg3;
- (void)_writeDict:(id)arg1 withFilename:(id)arg2;
- (bool)clearPauseMarkerForReason:(short)arg1;
- (void)clearWipeCPLOnOpen;
- (void)createPauseMarkerWithUnpauseTime:(id)arg1 reason:(short)arg2;
- (short)currentPauseReason;
- (void)dealloc;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (id)dupeAnalysisNeededFilePath;
- (void)forceSoftResetSync;
- (void)getDownloadPhotoCount:(unsigned long long*)arg1 downloadVideoCount:(unsigned long long*)arg2;
- (bool)hasItemToDownload;
- (id)initWithPathManager:(id)arg1;
- (id)initWithResourceHoldingDirectoryPath:(id)arg1;
- (bool)isDisableICloudPhotos;
- (bool)isDupeAnalysisNeeded;
- (bool)isEnableICloudPhotos;
- (bool)isForceSoftResetSync;
- (bool)isICloudPhotosPaused;
- (bool)isRebuildingPersons;
- (bool)isStreamsLibraryUpdatingExpired;
- (bool)isUserPause;
- (bool)isWipeCPLOnOpen;
- (void)logCloudServiceEnableEvent:(bool)arg1 serviceName:(id)arg2 reason:(id)arg3;
- (bool)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(bool)arg1;
- (void)setCreatingAssetIsBusy:(bool)arg1;
- (void)setDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2;
- (void)setDupeAnalysisNeeded:(bool)arg1;
- (void)setImageWriter:(id)arg1 isBusy:(bool)arg2 crashRecoverySupport:(id)arg3;
- (void)setIsRebuildingPersons:(bool)arg1;
- (void)setStreamsLibraryUpdatingExpired:(bool)arg1;
- (void)setTakingPhotoIsBusy:(bool)arg1;
- (void)setWipeCPLOnOpen;
- (id)unpauseTime;
- (void)updateICloudPhotosMarkerForEnable:(bool)arg1;
- (void)writeDisableICloudPhotosMarker;
- (void)writeEnableICloudPhotosMarker;

@end
