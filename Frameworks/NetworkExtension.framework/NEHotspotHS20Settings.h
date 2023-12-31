
@interface NEHotspotHS20Settings : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _MCCAndMNCs;
    NSString * _domainName;
    NSArray * _naiRealmNames;
    NSArray * _roamingConsortiumOIs;
    bool  _roamingEnabled;
}

@property (copy) NSArray *MCCAndMNCs;
@property (readonly) NSString *domainName;
@property (copy) NSArray *naiRealmNames;
@property (copy) NSArray *roamingConsortiumOIs;
@property (getter=isRoamingEnabled) bool roamingEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MCCAndMNCs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainName:(id)arg1 roamingEnabled:(bool)arg2;
- (bool)isRoamingEnabled;
- (id)naiRealmNames;
- (id)roamingConsortiumOIs;
- (void)setMCCAndMNCs:(id)arg1;
- (void)setNaiRealmNames:(id)arg1;
- (void)setRoamingConsortiumOIs:(id)arg1;
- (void)setRoamingEnabled:(bool)arg1;

@end
