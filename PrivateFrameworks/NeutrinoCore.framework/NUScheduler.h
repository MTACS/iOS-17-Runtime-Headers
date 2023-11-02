
@interface NUScheduler : NSObject {
    NUJobQueue * _completeQueue;
    NSString * _name;
    NUJobQueue * _prepareQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NUScheduledQueue * _rateLimiterQueue;
    NUJobQueue * _renderQueue;
    NSMutableSet * _scheduledContextWakeups;
}

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (bool)_coalesceJobs:(id)arg1;
- (void)_enqueueDependentJobsForRenderJob:(id)arg1;
- (void)_enqueueJobsForRequests:(id)arg1 withGroup:(id)arg2;
- (void)_enqueueRenderJob:(id)arg1 toStage:(long long)arg2;
- (void)_observeRenderJob:(id)arg1 withGroup:(id)arg2;
- (bool)_prepareNewJob:(id)arg1 at:(unsigned long long)arg2;
- (id)_queueForStage:(long long)arg1;
- (void)_resumeRenderJob:(id)arg1;
- (void)_scheduleRateLimitWakeupForContext:(id)arg1;
- (void)_wakeupRateLimitJobForContext:(id)arg1;
- (void)cancelJobsForRenderContext:(id)arg1;
- (id)debugDescription;
- (id)initWithName:(id)arg1;
- (void)submitRequests:(id)arg1 withGroup:(id)arg2;

@end
