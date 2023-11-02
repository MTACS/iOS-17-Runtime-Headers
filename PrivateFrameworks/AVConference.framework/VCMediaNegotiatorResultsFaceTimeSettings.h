
@interface VCMediaNegotiatorResultsFaceTimeSettings : NSObject {
    bool  _SIPDisabled;
    unsigned int  _faceTimeSwitches;
    unsigned char  _mediaControlInfoFECFeedbackVersion;
    bool  _oneToOneModeSupported;
    bool  _remoteFaceTimeSwitchesAvailable;
    unsigned char  _remoteLinkProbingCapabilityVersion;
    bool  _secureMessagingRequired;
    unsigned char  mediaControlInfoFECFeedbackVersion;
}

@property (nonatomic) bool SIPDisabled;
@property (nonatomic) unsigned int faceTimeSwitches;
@property (nonatomic) unsigned char mediaControlInfoFECFeedbackVersion;
@property (nonatomic) bool oneToOneModeSupported;
@property (nonatomic) bool remoteFaceTimeSwitchesAvailable;
@property (nonatomic) unsigned char remoteLinkProbingCapabilityVersion;
@property (nonatomic) bool secureMessagingRequired;

- (bool)SIPDisabled;
- (unsigned int)faceTimeSwitches;
- (unsigned char)mediaControlInfoFECFeedbackVersion;
- (bool)oneToOneModeSupported;
- (bool)remoteFaceTimeSwitchesAvailable;
- (unsigned char)remoteLinkProbingCapabilityVersion;
- (bool)secureMessagingRequired;
- (void)setFaceTimeSwitches:(unsigned int)arg1;
- (void)setMediaControlInfoFECFeedbackVersion:(unsigned char)arg1;
- (void)setOneToOneModeSupported:(bool)arg1;
- (void)setRemoteFaceTimeSwitchesAvailable:(bool)arg1;
- (void)setRemoteLinkProbingCapabilityVersion:(unsigned char)arg1;
- (void)setSIPDisabled:(bool)arg1;
- (void)setSecureMessagingRequired:(bool)arg1;

@end
