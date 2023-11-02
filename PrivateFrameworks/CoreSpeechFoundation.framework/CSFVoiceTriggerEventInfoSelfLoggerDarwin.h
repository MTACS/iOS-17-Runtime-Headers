
@interface CSFVoiceTriggerEventInfoSelfLoggerDarwin : CSFVoiceTriggerEventInfoSelfLogger {
    CSFCircularEventsCacheBuffer * _cancelledEvents;
    CSFCircularEventsCacheBuffer * _firstPassEvents;
    NSObject<OS_dispatch_queue> * _queue;
    CSFCircularEventsCacheBuffer * _rejectEvents;
}

@property (nonatomic, retain) CSFCircularEventsCacheBuffer *cancelledEvents;
@property (nonatomic, retain) CSFCircularEventsCacheBuffer *firstPassEvents;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSFCircularEventsCacheBuffer *rejectEvents;

- (void).cxx_destruct;
- (id)cancelledEvents;
- (void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(id /* block */)arg1;
- (id)firstPassEvents;
- (id)init;
- (void)logCancelledEventWithMHUUID:(id)arg1;
- (void)logRejectEventWithVTEI:(id)arg1 withMHUUID:(id)arg2 withSecondPassResult:(unsigned long long)arg3;
- (void)logSiriLaunchCompletedWithVoiceTriggerEventInfo:(id)arg1;
- (void)logSiriLaunchStartedWithVoiceTriggerEventInfo:(id)arg1;
- (void)logStartEventWithFirstPassStartedInfo:(id)arg1 withMHUUID:(id)arg2;
- (void)logTriggerEventWithVTEI:(id)arg1 withMHUUID:(id)arg2;
- (void)logTwoShotDetectedWithMHUUID:(id)arg1;
- (void)logTwoShotEndEventWithSuppresedAlert:(bool)arg1 withTimedOut:(bool)arg2 withMHUUID:(id)arg3;
- (void)logTwoShotStartEventWithPromptType:(unsigned int)arg1 withMHUUID:(id)arg2;
- (id)queue;
- (id)rejectEvents;
- (void)setCancelledEvents:(id)arg1;
- (void)setFirstPassEvents:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRejectEvents:(id)arg1;

@end
