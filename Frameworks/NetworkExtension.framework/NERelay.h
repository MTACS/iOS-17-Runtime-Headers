
@interface NERelay : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSURL * _HTTP2RelayURL;
    NSURL * _HTTP3RelayURL;
    NSDictionary * _additionalHTTPHeaderFields;
    NSArray * _certificates;
    NSURL * _dnsOverHTTPSURL;
    NEIdentityKeychainItem * _identity;
    NSData * _identityDataHash;
    bool  _identityDataImported;
    NSData * _identityDataInternal;
    NSString * _identityDataPassword;
    NEKeychainItem * _identityDataPasswordKeychainItem;
    NSString * _keychainAccessGroup;
    long long  _keychainDomain;
    NSArray * _rawPublicKeys;
    NSString * _syntheticDNSAnswerIPv4Prefix;
    NSString * _syntheticDNSAnswerIPv6Prefix;
}

@property (copy) NSURL *HTTP2RelayURL;
@property (copy) NSURL *HTTP3RelayURL;
@property (copy) NSDictionary *additionalHTTPHeaderFields;
@property (copy) NSArray *certificateReferences;
@property (copy) NSURL *dnsOverHTTPSURL;
@property (copy) NSData *identityData;
@property (copy) NSData *identityDataHash;
@property bool identityDataImported;
@property (copy) NSData *identityDataInternal;
@property (copy) NSString *identityDataPassword;
@property (copy) NEKeychainItem *identityDataPasswordKeychainItem;
@property (copy) NSData *identityReference;
@property (copy) NSData *identityReferenceInternal;
@property (copy) NSArray *rawPublicKeys;
@property (copy) NSString *syntheticDNSAnswerIPv4Prefix;
@property (copy) NSString *syntheticDNSAnswerIPv6Prefix;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)HTTP2RelayURL;
- (id)HTTP3RelayURL;
- (id)additionalHTTPHeaderFields;
- (id)certificateReferences;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (void)copyPasswordsFromKeychainInDomain:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)dnsOverHTTPSURL;
- (void)encodeWithCoder:(id)arg1;
- (id)identityData;
- (id)identityDataHash;
- (bool)identityDataImported;
- (id)identityDataInternal;
- (id)identityDataPassword;
- (id)identityDataPasswordKeychainItem;
- (id)identityReference;
- (id)identityReferenceInternal;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)rawPublicKeys;
- (void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(bool)arg2;
- (void)setAdditionalHTTPHeaderFields:(id)arg1;
- (void)setCertificateReferences:(id)arg1;
- (void)setDnsOverHTTPSURL:(id)arg1;
- (void)setHTTP2RelayURL:(id)arg1;
- (void)setHTTP3RelayURL:(id)arg1;
- (void)setIdentityData:(id)arg1;
- (void)setIdentityDataHash:(id)arg1;
- (void)setIdentityDataImported:(bool)arg1;
- (void)setIdentityDataInternal:(id)arg1;
- (void)setIdentityDataPassword:(id)arg1;
- (void)setIdentityDataPasswordKeychainItem:(id)arg1;
- (void)setIdentityReference:(id)arg1;
- (void)setIdentityReferenceInternal:(id)arg1;
- (void)setRawPublicKeys:(id)arg1;
- (void)setSyntheticDNSAnswerIPv4Prefix:(id)arg1;
- (void)setSyntheticDNSAnswerIPv6Prefix:(id)arg1;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (void)syncWithKeychainInDomainCommon:(long long)arg1;
- (id)syntheticDNSAnswerIPv4Prefix;
- (id)syntheticDNSAnswerIPv6Prefix;

@end
