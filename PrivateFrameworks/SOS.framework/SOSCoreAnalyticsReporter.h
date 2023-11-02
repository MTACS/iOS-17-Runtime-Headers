
@interface SOSCoreAnalyticsReporter : NSObject <SOSCoreAnalyticsReporting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)SOSCoordinationDeviceString:(long long)arg1;
+ (void)_AnalyticsSendEventLazy:(id)arg1 data:(id)arg2;
+ (bool)_firstPartyEnablementForTrigger:(long long)arg1;
+ (bool)_thirdPartyEnablementForTrigger:(long long)arg1;
+ (bool)isSensitiveTrigger:(long long)arg1;
+ (void)reportSOSAutomaticCallCountdownEnabled:(bool)arg1;
+ (void)reportSOSAutomaticNewtonEnabled:(bool)arg1;
+ (void)reportSOSLongPressTriggersEmergencySOS:(bool)arg1;
+ (void)reportSOSNumberOfVoiceLoops:(long long)arg1;
+ (void)reportSOSShouldPlayAudioDuringCountdown:(bool)arg1;
+ (id)sharedInstance;

- (void)reportSOSCancelationTimeout:(long long)arg1;
- (void)reportSOSEvent:(id)arg1 callDuration:(long long)arg2 isHandoffTrigger:(bool)arg3 onWristState:(long long)arg4;
- (void)reportSOSRejectedWithTrigger:(long long)arg1 currentTriggerMechanism:(long long)arg2;
- (void)reportSOSRestingResponse:(long long)arg1 restingResponse:(long long)arg2 hasMedicalID:(bool)arg3;
- (void)reportSOSTriggerHandoff:(long long)arg1 source:(long long)arg2 destination:(long long)arg3 result:(long long)arg4;
- (void)reportSOSTriggered:(long long)arg1;
- (void)reportSOSUserCancelled:(long long)arg1 lastFlowState:(long long)arg2 countdownValue:(long long)arg3;

@end
