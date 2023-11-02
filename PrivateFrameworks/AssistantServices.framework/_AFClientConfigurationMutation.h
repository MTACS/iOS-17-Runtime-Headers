
@interface _AFClientConfigurationMutation : NSObject <AFClientConfigurationMutating> {
    AFAccessibilityState * _accessibilityState;
    bool  _areAnnouncementRequestsPermittedByPresentationWhileActive;
    AFClientConfiguration * _base;
    long long  _deviceRingerSwitchState;
    NSDate * _deviceSetupFlowBeginDate;
    NSDate * _deviceSetupFlowEndDate;
    bool  _isDeviceInCarDNDMode;
    bool  _isDeviceInStarkMode;
    bool  _isDeviceWatchAuthenticated;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasAccessibilityState : 1; 
        unsigned int hasDeviceRingerSwitchState : 1; 
        unsigned int hasIsDeviceInCarDNDMode : 1; 
        unsigned int hasIsDeviceInStarkMode : 1; 
        unsigned int hasIsDeviceWatchAuthenticated : 1; 
        unsigned int hasAreAnnouncementRequestsPermittedByPresentationWhileActive : 1; 
        unsigned int hasOutputVolume : 1; 
        unsigned int hasTapToSiriAudioPlaybackRequest : 1; 
        unsigned int hasTwoShotAudioPlaybackRequest : 1; 
        unsigned int hasDeviceSetupFlowBeginDate : 1; 
        unsigned int hasDeviceSetupFlowEndDate : 1; 
    }  _mutationFlags;
    float  _outputVolume;
    AFAudioPlaybackRequest * _tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest * _twoShotAudioPlaybackRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getAccessibilityState;
- (bool)getAreAnnouncementRequestsPermittedByPresentationWhileActive;
- (long long)getDeviceRingerSwitchState;
- (id)getDeviceSetupFlowBeginDate;
- (id)getDeviceSetupFlowEndDate;
- (bool)getIsDeviceInCarDNDMode;
- (bool)getIsDeviceInStarkMode;
- (bool)getIsDeviceWatchAuthenticated;
- (float)getOutputVolume;
- (id)getTapToSiriAudioPlaybackRequest;
- (id)getTwoShotAudioPlaybackRequest;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAccessibilityState:(id)arg1;
- (void)setAreAnnouncementRequestsPermittedByPresentationWhileActive:(bool)arg1;
- (void)setDeviceRingerSwitchState:(long long)arg1;
- (void)setDeviceSetupFlowBeginDate:(id)arg1;
- (void)setDeviceSetupFlowEndDate:(id)arg1;
- (void)setIsDeviceInCarDNDMode:(bool)arg1;
- (void)setIsDeviceInStarkMode:(bool)arg1;
- (void)setIsDeviceWatchAuthenticated:(bool)arg1;
- (void)setOutputVolume:(float)arg1;
- (void)setTapToSiriAudioPlaybackRequest:(id)arg1;
- (void)setTwoShotAudioPlaybackRequest:(id)arg1;

@end
