
@interface DMTNetworkCredential : NSObject <NSCopying, NSSecureCoding> {
    NSString * _credential;
    NSString * _networkName;
}

@property (nonatomic, readonly) NSString *credential;
@property (nonatomic, readonly) NSString *networkName;

+ (id)credentialWithNetworkName:(id)arg1 credential:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credential;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetworkName:(id)arg1 credential:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCredential:(id)arg1;
- (id)networkName;

@end
