
@interface SASButtonActvationRequest : SASActivationRequest {
    long long  _buttonIdentifier;
}

@property (nonatomic) long long buttonIdentifier;

- (long long)buttonIdentifier;
- (bool)isButtonRequest;
- (bool)isDeviceButtonRequest;
- (bool)isHoldToTalkSource;
- (bool)isTestingRequest;
- (bool)isVoiceRequest;
- (void)setButtonIdentifier:(long long)arg1;

@end
