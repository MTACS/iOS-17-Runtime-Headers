
@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding> {
    AFAccessibilityState * _accessibilityState;
    bool  _areAnnouncementRequestsPermittedByPresentationWhileActive;
    long long  _deviceRingerSwitchState;
    NSDate * _deviceSetupFlowBeginDate;
    NSDate * _deviceSetupFlowEndDate;
    bool  _isDeviceInCarDNDMode;
    bool  _isDeviceInStarkMode;
    bool  _isDeviceWatchAuthenticated;
    float  _outputVolume;
    AFAudioPlaybackRequest * _tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest * _twoShotAudioPlaybackRequest;
}

@property (nonatomic, readonly, copy) AFAccessibilityState *accessibilityState;
@property (nonatomic, readonly) bool areAnnouncementRequestsPermittedByPresentationWhileActive;
@property (nonatomic, readonly) long long deviceRingerSwitchState;
@property (nonatomic, readonly, copy) NSDate *deviceSetupFlowBeginDate;
@property (nonatomic, readonly, copy) NSDate *deviceSetupFlowEndDate;
@property (nonatomic, readonly) bool isDeviceInCarDNDMode;
@property (nonatomic, readonly) bool isDeviceInStarkMode;
@property (nonatomic, readonly) bool isDeviceWatchAuthenticated;
@property (nonatomic, readonly) float outputVolume;
@property (nonatomic, readonly, copy) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest;
@property (nonatomic, readonly, copy) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)accessibilityState;
- (bool)areAnnouncementRequestsPermittedByPresentationWhileActive;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceRingerSwitchState;
- (id)deviceSetupFlowBeginDate;
- (id)deviceSetupFlowEndDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAccessibilityState:(id)arg1 deviceRingerSwitchState:(long long)arg2 isDeviceInCarDNDMode:(bool)arg3 isDeviceInStarkMode:(bool)arg4 isDeviceWatchAuthenticated:(bool)arg5 areAnnouncementRequestsPermittedByPresentationWhileActive:(bool)arg6 outputVolume:(float)arg7 tapToSiriAudioPlaybackRequest:(id)arg8 twoShotAudioPlaybackRequest:(id)arg9 deviceSetupFlowBeginDate:(id)arg10 deviceSetupFlowEndDate:(id)arg11;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDeviceInCarDNDMode;
- (bool)isDeviceInStarkMode;
- (bool)isDeviceWatchAuthenticated;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (float)outputVolume;
- (id)tapToSiriAudioPlaybackRequest;
- (id)twoShotAudioPlaybackRequest;

@end
