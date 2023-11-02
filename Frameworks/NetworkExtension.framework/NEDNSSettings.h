
@interface NEDNSSettings : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString * _domainName;
    NSArray * _matchDomains;
    bool  _matchDomainsNoSearch;
    NSUUID * _proxyAgentUUID;
    NSArray * _searchDomains;
    NSArray * _servers;
}

@property (readonly) long long dnsProtocol;
@property (copy) NSString *domainName;
@property (copy) NSArray *matchDomains;
@property bool matchDomainsNoSearch;
@property (nonatomic, retain) NSUUID *proxyAgentUUID;
@property (copy) NSArray *searchDomains;
@property (readonly) NSArray *servers;
@property (nonatomic, readonly) bool useForAllDomains;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (long long)dnsProtocol;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServers:(id)arg1;
- (id)matchDomains;
- (bool)matchDomainsNoSearch;
- (id)proxyAgentUUID;
- (id)searchDomains;
- (id)servers;
- (void)setDomainName:(id)arg1;
- (void)setMatchDomains:(id)arg1;
- (void)setMatchDomainsNoSearch:(bool)arg1;
- (void)setProxyAgentUUID:(id)arg1;
- (void)setSearchDomains:(id)arg1;
- (bool)useForAllDomains;

@end
