
@interface DAEASOAuthPKCEChallenge : NSObject {
    NSString * _codeChallenge;
    long long  _codeChallengeMethod;
    NSString * _codeVerifier;
}

@property (nonatomic, retain) NSString *codeChallenge;
@property (nonatomic) long long codeChallengeMethod;
@property (nonatomic, retain) NSString *codeVerifier;

+ (id)base64URLEncode:(id)arg1;
+ (id)convertToString:(long long)arg1;
+ (id)newCodeVerifier;

- (void).cxx_destruct;
- (id)codeChallenge;
- (id)codeChallengeFromVerifier:(id)arg1 withCodeChallengeMethod:(long long)arg2;
- (long long)codeChallengeMethod;
- (id)codeVerifier;
- (id)initWithCodeChallengeMethod:(long long)arg1;
- (void)setCodeChallenge:(id)arg1;
- (void)setCodeChallengeMethod:(long long)arg1;
- (void)setCodeVerifier:(id)arg1;

@end
