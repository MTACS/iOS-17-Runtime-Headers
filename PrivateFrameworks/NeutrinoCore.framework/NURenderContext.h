
@interface NURenderContext : NSObject {
    NSPointerArray * _jobs;
    NURenderNode * _lastPrepareNode;
    NURenderNode * _lastRenderNode;
    double  _minimumRenderInterval;
    unsigned long long  _nextRenderTime;
    long long  _purpose;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _rateLimitedJobs;
    bool  _shouldCoalesceUpdates;
}

@property (readonly) long long jobCount;
@property (readonly) NSArray *jobs;
@property (retain) NURenderNode *lastPrepareNode;
@property (retain) NURenderNode *lastRenderNode;
@property double minimumRenderInterval;
@property unsigned long long nextRenderTime;
@property (nonatomic, readonly) long long purpose;
@property bool shouldCoalesceUpdates;

- (void).cxx_destruct;
- (void)_cancelAllJobs;
- (id)_dequeueRateLimitedJob;
- (void)_enqueueRateLimitedJob:(id)arg1;
- (void)_jobFinished:(id)arg1;
- (void)_removeJob:(id)arg1;
- (void)addJob:(id)arg1;
- (void)cancelAllJobs;
- (void)cancelAllRequests;
- (id)debugDescription;
- (id)dequeueRateLimitedJob;
- (void)enqueueRateLimitedJob:(id)arg1;
- (id)init;
- (id)initWithPurpose:(long long)arg1;
- (long long)jobCount;
- (id)jobs;
- (id)lastPrepareNode;
- (id)lastRenderNode;
- (double)minimumRenderInterval;
- (unsigned long long)nextRenderTime;
- (long long)purpose;
- (void)removeJob:(id)arg1;
- (void)setLastPrepareNode:(id)arg1;
- (void)setLastRenderNode:(id)arg1;
- (void)setMinimumRenderInterval:(double)arg1;
- (void)setNextRenderTime:(unsigned long long)arg1;
- (void)setShouldCoalesceUpdates:(bool)arg1;
- (bool)shouldCoalesceUpdates;
- (void)updateNextRenderTimeFromTime:(unsigned long long)arg1;

@end
