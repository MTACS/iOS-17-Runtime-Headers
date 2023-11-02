
@interface NEDNSOverTLSSettings : NEDNSSettings {
    NSData * _identityReference;
    NSString * _serverName;
}

@property (copy) NSData *identityReference;
@property (copy) NSString *serverName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (long long)dnsProtocol;
- (void)encodeWithCoder:(id)arg1;
- (id)identityReference;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serverName;
- (void)setIdentityReference:(id)arg1;
- (void)setServerName:(id)arg1;

@end
