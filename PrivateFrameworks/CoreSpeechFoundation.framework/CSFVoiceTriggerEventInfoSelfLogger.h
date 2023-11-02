
@interface CSFVoiceTriggerEventInfoSelfLogger : NSObject

+ (id)sharedLogger;

- (void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(id /* block */)arg1;
- (void)logCancelledEventWithMHUUID:(id)arg1;
- (void)logRejectEventWithVTEI:(id)arg1 withMHUUID:(id)arg2 withSecondPassResult:(unsigned long long)arg3;
- (void)logSiriLaunchCompletedWithVoiceTriggerEventInfo:(id)arg1;
- (void)logSiriLaunchStartedWithVoiceTriggerEventInfo:(id)arg1;
- (void)logStartEventWithFirstPassStartedInfo:(id)arg1 withMHUUID:(id)arg2;
- (void)logTriggerEventWithVTEI:(id)arg1 withMHUUID:(id)arg2;
- (void)logTwoShotDetectedWithMHUUID:(id)arg1;
- (void)logTwoShotEndEventWithSuppresedAlert:(bool)arg1 withTimedOut:(bool)arg2 withMHUUID:(id)arg3;
- (void)logTwoShotStartEventWithPromptType:(unsigned int)arg1 withMHUUID:(id)arg2;

@end
