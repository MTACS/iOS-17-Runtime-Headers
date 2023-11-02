
@interface NEOnDemandRule : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSArray * _DNSSearchDomainMatch;
    NSArray * _DNSServerAddressMatch;
    NSArray * _SSIDMatch;
    long long  _action;
    long long  _interfaceTypeMatch;
    NSURL * _probeURL;
}

@property (copy) NSArray *DNSSearchDomainMatch;
@property (copy) NSArray *DNSServerAddressMatch;
@property (copy) NSArray *SSIDMatch;
@property (readonly) long long action;
@property long long interfaceTypeMatch;
@property (copy) NSURL *probeURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DNSSearchDomainMatch;
- (id)DNSServerAddressMatch;
- (id)SSIDMatch;
- (long long)action;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithAction:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)interfaceTypeMatch;
- (bool)isEqual:(id)arg1;
- (id)probeURL;
- (void)setDNSSearchDomainMatch:(id)arg1;
- (void)setDNSServerAddressMatch:(id)arg1;
- (void)setInterfaceTypeMatch:(long long)arg1;
- (void)setProbeURL:(id)arg1;
- (void)setSSIDMatch:(id)arg1;

@end