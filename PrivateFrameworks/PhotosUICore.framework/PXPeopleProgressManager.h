
@interface PXPeopleProgressManager : NSObject {
    PXPeopleProgressDataSource * _dataSource;
    bool  _monitoringProgress;
    long long  _processingStatus;
    double  _progress;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _progressLock;
    NSTimer * _statusTimer;
    double  _updateInterval;
}

@property (nonatomic, readonly) PXPeopleProgressDataSource *dataSource;
@property (nonatomic, readonly) bool featureUnlocked;
@property (nonatomic) bool monitoringProgress;
@property (nonatomic) long long processingStatus;
@property (nonatomic) double progress;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } progressLock;
@property (nonatomic, readonly) bool shouldUseInterstitial;
@property (nonatomic, retain) NSTimer *statusTimer;
@property (nonatomic) double updateInterval;

+ (id)_progressFooterQueue;
+ (id)_statusStringForStatus:(long long)arg1;
+ (bool)hasSubstantialProcessingRemainingForThreshold:(long long)arg1 pendingAssetCount:(long long)arg2 allowedAssetCount:(long long)arg3 photoLibrary:(id)arg4;
+ (bool)progressComplete:(double)arg1;
+ (void)shouldCheckProcessedCounts:(bool*)arg1 hasSubstantialProcessingRemaining:(bool*)arg2 threshold:(long long)arg3 featureUnlocked:(bool)arg4;
+ (bool)shouldCheckProcessedCountsForThreshold:(long long)arg1;

- (void).cxx_destruct;
- (void)_handleAsyncUpdateIsReadyForAnalysis:(bool)arg1 processedToAnyVersionProgress:(long long)arg2 processedToAnyVersionCount:(long long)arg3;
- (void)_logFaceCounts;
- (void)_scheduleNextUpdate;
- (void)_updateStatusForIsReadyForAnalysis:(bool)arg1 progress:(double)arg2 processCount:(long long)arg3;
- (id)dataSource;
- (bool)featureUnlocked;
- (bool)hasSubstantialProcessingRemainingForThreshold:(long long)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)monitoringProgress;
- (long long)processingStatus;
- (double)progress;
- (struct os_unfair_lock_s { unsigned int x1; })progressLock;
- (void)setMonitoringProgress:(bool)arg1;
- (void)setProcessingStatus:(long long)arg1;
- (void)setProgress:(double)arg1;
- (void)setStatusTimer:(id)arg1;
- (void)setUpdateInterval:(double)arg1;
- (bool)shouldUseInterstitial;
- (void)shouldUseProgressFooterWithCompletion:(id /* block */)arg1;
- (id)statusTimer;
- (double)updateInterval;
- (void)updateProgressWithForce:(bool)arg1;

@end
