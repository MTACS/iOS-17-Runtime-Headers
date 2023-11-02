
@interface TVRXDeviceAuthenticationChallenge : NSObject {
    id /* block */  _cancellationHandler;
    long long  _challengeAttributes;
    long long  _challengeType;
    NSString * _codeToEnterOnDevice;
    id /* block */  _continuation;
    long long  _throttleSeconds;
}

@property (nonatomic) long long challengeAttributes;
@property (nonatomic, readonly) long long challengeType;
@property (nonatomic, readonly, copy) NSString *codeToEnterOnDevice;
@property (nonatomic) long long throttleSeconds;

+ (id)_challengeWithCodeToEnterLocally:(id /* block */)arg1;
+ (id)_challengeWithCodeToEnterOnDevice:(id)arg1 cancellationHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_init;
- (void)cancel;
- (long long)challengeAttributes;
- (long long)challengeType;
- (id)codeToEnterOnDevice;
- (void)setChallengeAttributes:(long long)arg1;
- (void)setThrottleSeconds:(long long)arg1;
- (long long)throttleSeconds;
- (void)userEnteredCodeLocally:(id)arg1;

@end
