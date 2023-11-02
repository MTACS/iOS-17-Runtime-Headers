
@protocol AFClientConfigurationMutating <NSObject>

@required

- (void)setAccessibilityState:(AFAccessibilityState *)arg1;
- (void)setAreAnnouncementRequestsPermittedByPresentationWhileActive:(bool)arg1;
- (void)setDeviceRingerSwitchState:(long long)arg1;
- (void)setDeviceSetupFlowBeginDate:(NSDate *)arg1;
- (void)setDeviceSetupFlowEndDate:(NSDate *)arg1;
- (void)setIsDeviceInCarDNDMode:(bool)arg1;
- (void)setIsDeviceInStarkMode:(bool)arg1;
- (void)setIsDeviceWatchAuthenticated:(bool)arg1;
- (void)setOutputVolume:(float)arg1;
- (void)setTapToSiriAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1;
- (void)setTwoShotAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1;

@end
