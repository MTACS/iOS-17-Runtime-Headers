
@interface FPProgressProxy : NSProgress {
    bool  _didSetupParentProgress;
    NSURL * _fileURL;
    NSObservation * _fractionCompletedObservation;
    bool  _isInSetup;
    bool  _shouldStopAccessingURL;
    id  _subscriber;
    NSObservation * _totalUnitCountObservation;
    bool  _updateFileCount;
}

@property (nonatomic) bool updateFileCount;

- (void).cxx_destruct;
- (void)_readPausedProgressFromDisk;
- (void)dealloc;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setProgressDidSetupHandler:(id /* block */)arg1;
- (void)setUpdateFileCount:(bool)arg1;
- (id)shortDescription;
- (void)startTrackingFileURL:(id)arg1 kind:(id)arg2 allowReadPausedProgressFromDisk:(bool)arg3;
- (void)stopTrackingIfStarted;
- (void)stopTrackingIfStartedNotSynchronized;
- (bool)updateFileCount;
- (void)updateWithProgress:(id)arg1;

@end
