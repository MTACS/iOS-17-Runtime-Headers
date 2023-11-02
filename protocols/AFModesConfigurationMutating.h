
@protocol AFModesConfigurationMutating <NSObject>

@required

- (void)setButtonPressDetected:(long long)arg1;
- (void)setDeviceMotion:(long long)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setDeviceRaised:(long long)arg1;
- (void)setFaceDetected:(long long)arg1;
- (void)setFlatDevicePosture:(long long)arg1;
- (void)setIsBacklightOn:(long long)arg1;
- (void)setIsConnectedToCarPlay:(bool)arg1;
- (void)setIsDeviceScreenON:(bool)arg1;
- (void)setIsEyesFree:(bool)arg1;
- (void)setIsFlexibleFollowup:(bool)arg1;
- (void)setIsForCarDND:(bool)arg1;
- (void)setIsInAmbient:(bool)arg1;
- (void)setIsInPocket:(bool)arg1;
- (void)setIsInSleepLock:(long long)arg1;
- (void)setIsInTheaterMode:(long long)arg1;
- (void)setIsInWaterLock:(long long)arg1;
- (void)setIsInWorkout:(long long)arg1;
- (void)setIsMapsNavigationActive:(bool)arg1;
- (void)setIsMediaPlaying:(bool)arg1;
- (void)setIsOnWrist:(long long)arg1;
- (void)setIsRequestMadeWithPhysicalDeviceInteraction:(bool)arg1;
- (void)setIsSiriAutoPrompt:(bool)arg1;
- (void)setIsUIFree:(bool)arg1;
- (void)setIsVoiceTriggerRequest:(bool)arg1;
- (void)setLiftToWakeDetected:(bool)arg1;
- (void)setModeOverrideValue:(NSString *)arg1;
- (void)setTouchScreenDetected:(long long)arg1;
- (void)setUserInitiatedWakeDetected:(bool)arg1;
- (void)setUserTypedInSiri:(bool)arg1;

@end
