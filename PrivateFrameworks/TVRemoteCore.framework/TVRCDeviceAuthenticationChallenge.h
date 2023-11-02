
@interface TVRCDeviceAuthenticationChallenge : NSObject {
    long long  _challengeAttributes;
    long long  _challengeType;
    NSString * _codeToEnterOnDevice;
    NSString * _deviceIdentifier;
    long long  _throttleSeconds;
}

@property (nonatomic) long long challengeAttributes;
@property (nonatomic, readonly) long long challengeType;
@property (nonatomic, readonly, copy) NSString *codeToEnterOnDevice;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic) long long throttleSeconds;

- (void).cxx_destruct;
- (id)_initWithDeviceIdentifier:(id)arg1 challengeType:(long long)arg2 codeToEnterOnDevice:(id)arg3;
- (void)cancel;
- (long long)challengeAttributes;
- (long long)challengeType;
- (id)codeToEnterOnDevice;
- (id)deviceIdentifier;
- (void)setChallengeAttributes:(long long)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setThrottleSeconds:(long long)arg1;
- (long long)throttleSeconds;
- (void)userEnteredCodeLocally:(id)arg1;

@end
