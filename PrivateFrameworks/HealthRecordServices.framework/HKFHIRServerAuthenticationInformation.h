
@interface HKFHIRServerAuthenticationInformation : NSObject <NSCopying, NSSecureCoding> {
    long long  _PKCEAlgorithm;
    NSString * _clientID;
    NSString * _clientSecret;
}

@property (nonatomic, readonly) long long PKCEAlgorithm;
@property (nonatomic, readonly, copy) NSString *clientID;
@property (nonatomic, readonly, copy) NSString *clientSecret;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)PKCEAlgorithm;
- (id)clientID;
- (id)clientSecret;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientID:(id)arg1 clientSecret:(id)arg2 PKCEAlgorithm:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
