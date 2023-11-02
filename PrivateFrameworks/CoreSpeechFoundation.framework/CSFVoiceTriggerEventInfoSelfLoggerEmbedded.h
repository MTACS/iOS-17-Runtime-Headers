
@interface CSFVoiceTriggerEventInfoSelfLoggerEmbedded : CSFVoiceTriggerEventInfoSelfLogger

+ (int)_convertJarvisTriggerModeString:(id)arg1;
+ (int)_convertPowerState:(unsigned int)arg1;
+ (id)_convertToFirstPassChannelSelectionScores:(id)arg1;
+ (int)_convertToFirstPassSource:(id)arg1;
+ (int)_convertToMatchResult:(unsigned int)arg1;
+ (int)_convertToSELFRejectedReason:(unsigned long long)arg1;
+ (id)_convertToSELFVTEI:(id)arg1;
+ (int)_convertToTwoShotPromptType:(long long)arg1;
+ (void)_emitTwoShotClientEventWithTwoShotTransitionContext:(id)arg1 withMHUUID:(id)arg2;
+ (void)_emitVTClientEventWithVTContext:(id)arg1 withMHUUID:(id)arg2;
+ (id)_getStartedMessageWithFirstPassInfo:(id)arg1;
+ (double)_round:(double)arg1 withPlaces:(int)arg2;
+ (id)sanitizeEventInfoForLogging:(id)arg1;

- (void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(id /* block */)arg1;
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

@end
