
@interface OSASubmissionScheduler : NSObject

+ (id)_calculateNewCadenceParametersWithPermissive:(bool)arg1 fastLane:(bool)arg2;
+ (id)_getCurrentCadenceParametersFromActivity:(id)arg1;
+ (void)_incrementRetryCount;
+ (double)_lastSuccessTime;
+ (void)_resetRetryCount;
+ (long long)_retryCount;
+ (void)_saveLastSuccessTime;
+ (void)_scheduleSubmissionWithPermissive:(bool)arg1;
+ (void)_updateCadenceForActivity:(id)arg1 newCadenceParameters:(id)arg2;
+ (void)scheduleCleanupWithHomeDirectory:(id)arg1;
+ (void)scheduleSubmission;

@end
