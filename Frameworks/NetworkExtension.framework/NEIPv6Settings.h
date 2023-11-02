
@interface NEIPv6Settings : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSArray * _addresses;
    long long  _configMethod;
    NSArray * _excludedRoutes;
    NSArray * _includedRoutes;
    NSArray * _networkPrefixLengths;
    NSString * _router;
}

@property (readonly) NSArray *addresses;
@property long long configMethod;
@property (copy) NSArray *excludedRoutes;
@property (copy) NSArray *includedRoutes;
@property (readonly) NSArray *networkPrefixLengths;
@property (copy) NSString *router;

+ (id)settingsWithAutomaticAddressing;
+ (id)settingsWithLinkLocalAddressing;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addresses;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (long long)configMethod;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedRoutes;
- (bool)hasDefaultRoute;
- (id)includedRoutes;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithAddresses:(id)arg1 networkPrefixLengths:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigMethod:(long long)arg1;
- (id)networkPrefixLengths;
- (id)router;
- (void)setConfigMethod:(long long)arg1;
- (void)setExcludedRoutes:(id)arg1;
- (void)setIncludedRoutes:(id)arg1;
- (void)setRouter:(id)arg1;

@end
