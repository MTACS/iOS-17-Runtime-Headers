
@interface NEAppRule : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSArray * _cachedMachOUUIDs;
    NSArray * _matchAccountIdentifiers;
    NSString * _matchDesignatedRequirement;
    NSArray * _matchDomains;
    NSString * _matchPath;
    NSString * _matchSigningIdentifier;
    NSArray * _matchTools;
    bool  _noDivertDNS;
    bool  _noRestriction;
}

@property (retain) NSArray *cachedMachOUUIDs;
@property (copy) NSArray *matchAccountIdentifiers;
@property (readonly) NSString *matchDesignatedRequirement;
@property (copy) NSArray *matchDomains;
@property (copy) NSString *matchPath;
@property (readonly) NSString *matchSigningIdentifier;
@property (copy) NSArray *matchTools;
@property bool noDivertDNS;
@property bool noRestriction;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedMachOUUIDs;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigningIdentifier:(id)arg1;
- (id)matchAccountIdentifiers;
- (id)matchDesignatedRequirement;
- (id)matchDomains;
- (id)matchPath;
- (id)matchSigningIdentifier;
- (id)matchTools;
- (bool)noDivertDNS;
- (bool)noRestriction;
- (bool)overlapsWithRule:(id)arg1;
- (void)setCachedMachOUUIDs:(id)arg1;
- (void)setMatchAccountIdentifiers:(id)arg1;
- (void)setMatchDomains:(id)arg1;
- (void)setMatchPath:(id)arg1;
- (void)setMatchTools:(id)arg1;
- (void)setNoDivertDNS:(bool)arg1;
- (void)setNoRestriction:(bool)arg1;
- (bool)signingIdentifierAllowed:(id)arg1 domainsOrAccountsRequired:(out bool*)arg2;

@end
