
@interface SFSSLServerTrustPolicy : SFTrustPolicy <NSSecureCoding> {
    id  _sslServerTrustPolicyInternal;
}

@property (nonatomic, copy) NSString *serverName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerName:(id)arg1;
- (id)serverName;
- (void)setServerName:(id)arg1;

@end
