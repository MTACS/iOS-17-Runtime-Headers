
@interface NEDNSOverHTTPSSettings : NEDNSSettings {
    NSData * _identityReference;
    NSURL * _serverURL;
}

@property (copy) NSData *identityReference;
@property (copy) NSURL *serverURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (long long)dnsProtocol;
- (void)encodeWithCoder:(id)arg1;
- (id)identityReference;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serverURL;
- (void)setIdentityReference:(id)arg1;
- (void)setServerURL:(id)arg1;

@end
