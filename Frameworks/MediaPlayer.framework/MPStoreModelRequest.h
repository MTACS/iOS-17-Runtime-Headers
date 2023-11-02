
@interface MPStoreModelRequest : MPModelRequest {
    unsigned long long  _authenticationOptions;
    NSString * _clientIdentifier;
    NSString * _clientPlatformIdentifier;
    NSString * _clientVersion;
    bool  _didSetTimeoutInterval;
    double  _timeoutInterval;
}

@property (nonatomic) unsigned long long authenticationOptions;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *clientPlatformIdentifier;
@property (nonatomic, copy) NSString *clientVersion;
@property (nonatomic) double timeoutInterval;

+ (bool)requiresNetwork;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)authenticationOptions;
- (id)clientIdentifier;
- (id)clientPlatformIdentifier;
- (id)clientVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAuthenticationOptions:(unsigned long long)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setClientPlatformIdentifier:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;

@end
