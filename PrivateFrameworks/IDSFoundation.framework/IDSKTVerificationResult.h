
@interface IDSKTVerificationResult : NSObject <NSSecureCoding> {
    NSArray * _endpointTransparencyStates;
    bool  _optedIn;
    NSArray * _unverifiedPushTokens;
    NSString * _uri;
    NSArray * _verifiedPushTokens;
}

@property (nonatomic, retain) NSArray *endpointTransparencyStates;
@property (nonatomic) bool optedIn;
@property (nonatomic, retain) NSArray *unverifiedPushTokens;
@property (nonatomic, retain) NSString *uri;
@property (nonatomic, retain) NSArray *verifiedPushTokens;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointTransparencyStates;
- (id)initWithCoder:(id)arg1;
- (bool)optedIn;
- (void)setEndpointTransparencyStates:(id)arg1;
- (void)setOptedIn:(bool)arg1;
- (void)setUnverifiedPushTokens:(id)arg1;
- (void)setUri:(id)arg1;
- (void)setVerifiedPushTokens:(id)arg1;
- (id)unverifiedPushTokens;
- (id)uri;
- (id)verifiedPushTokens;

@end
