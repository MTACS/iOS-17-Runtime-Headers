
@interface PXStoryProducerMonitor : PXObservable <PXStoryMutableProducerMonitor, PXStoryQueueParticipant> {
    float  _estimatedFractionCompletedPlaybackSpeed;
    bool  _isLikelyToKeepUp;
    float  _lastFractionCompleted;
    double  _lastTime;
    double  _startTime;
    NSObject<OS_dispatch_queue> * _storyQueue;
    PXUpdater * _updater;
}

@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float estimatedFractionCompletedPlaybackSpeed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLikelyToKeepUp;
@property (nonatomic, readonly) float lastFractionCompleted;
@property (nonatomic, readonly) double lastTime;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;

+ (id)currentDateForTesting;
+ (void)setCurrentDateForTesting:(id)arg1;

- (void).cxx_destruct;
- (void)_invalidateIsLikelyToKeepUp;
- (void)_setNeedsUpdate;
- (void)_updateIsLikelyToKeepUp;
- (double)currentTime;
- (void)didPerformChanges;
- (float)estimatedFractionCompletedPlaybackSpeed;
- (id)init;
- (id)initWithStoryQueue:(id)arg1;
- (bool)isLikelyToKeepUp;
- (float)lastFractionCompleted;
- (double)lastTime;
- (void)performChanges:(id /* block */)arg1;
- (void)producerDidProduceResult:(id)arg1;
- (void)reset;
- (void)setEstimatedFractionCompletedPlaybackSpeed:(float)arg1;
- (void)setIsLikelyToKeepUp:(bool)arg1;
- (void)setLastFractionCompleted:(float)arg1;
- (void)setLastTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (id)storyQueue;
- (id)updater;

@end
