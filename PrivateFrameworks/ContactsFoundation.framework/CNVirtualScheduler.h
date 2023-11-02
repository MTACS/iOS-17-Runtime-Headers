
@interface CNVirtualScheduler : NSObject <CNScheduler> {
    unsigned long long  _clock;
    bool  _isPerforming;
    bool  _isStarted;
    unsigned long long  _nextSchedulableTick;
    CNQueue * _queue;
    unsigned long long  _stopTime;
}

@property (readonly) unsigned long long clock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPerforming;
@property (nonatomic, readonly) bool isStarted;
@property (nonatomic, readonly) unsigned long long nextSchedulableTick;
@property (nonatomic, readonly) CNQueue *queue;
@property (nonatomic, readonly) unsigned long long stopTime;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

+ (id)providerWithScheduler:(id)arg1;
+ (unsigned long long)timeWithDelay:(double)arg1 fromClock:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)_nextSchedulableTick;
- (bool)_performJobs;
- (id)_scheduleBlock:(id /* block */)arg1 atTime:(unsigned long long)arg2;
- (void)advanceBy:(unsigned long long)arg1;
- (void)advanceTo:(unsigned long long)arg1;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (unsigned long long)clock;
- (id)description;
- (bool)hasJobsScheduled;
- (id)init;
- (bool)isPerforming;
- (bool)isStarted;
- (unsigned long long)nextSchedulableTick;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)queue;
- (void)start;
- (void)stop;
- (unsigned long long)stopTime;
- (double)timestamp;

@end
