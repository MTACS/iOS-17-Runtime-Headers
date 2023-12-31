
@interface NETunnelNetworkSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NEDNSSettings * _DNSSettings;
    NEProxySettings * _proxySettings;
    NSString * _tunnelRemoteAddress;
}

@property (copy) NEDNSSettings *DNSSettings;
@property (copy) NEProxySettings *proxySettings;
@property (readonly) NSString *tunnelRemoteAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DNSSettings;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTunnelRemoteAddress:(id)arg1;
- (id)proxySettings;
- (void)setDNSSettings:(id)arg1;
- (void)setProxySettings:(id)arg1;
- (id)tunnelRemoteAddress;

@end
