
@interface ICRequestContext : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _allowsMutation;
    ICURLResponseAuthenticationProvider * _authenticationProvider;
    ICClientInfo * _clientInfo;
    ICDeviceInfo * _deviceInfo;
    ICNetworkConstraints * _networkConstraints;
}

@property (nonatomic, readonly) ICURLResponseAuthenticationProvider *authenticationProvider;
@property (nonatomic, readonly, copy) ICClientInfo *clientInfo;
@property (nonatomic, readonly) ICDeviceInfo *deviceInfo;
@property (nonatomic, readonly, copy) ICNetworkConstraints *networkConstraints;
@property (nonatomic, readonly, copy) NSString *userAgent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_allowsMutation;
- (id)_genericUserAgent;
- (id)_userAgentWithPlatformVersion;
- (id)_webkitUserAgentVersion;
- (id)authenticationProvider;
- (id)clientInfo;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceInfo;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithClientInfo:(id)arg1;
- (id)initWithClientInfo:(id)arg1 authenticationProvider:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)networkConstraints;
- (void)setAuthenticationProvider:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (id)userAgent;

@end
