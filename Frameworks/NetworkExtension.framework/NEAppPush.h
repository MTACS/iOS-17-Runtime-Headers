
@interface NEAppPush : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool  _enabled;
    NSArray * _matchPrivateLTENetworks;
    NSArray * _matchSSIDs;
    NSString * _pluginType;
    NSString * _providerBundleIdentifier;
    NSDictionary * _providerConfiguration;
}

@property (getter=isEnabled) bool enabled;
@property (copy) NSArray *matchPrivateLTENetworks;
@property (copy) NSArray *matchSSIDs;
@property (copy) NSString *pluginType;
@property (copy) NSString *providerBundleIdentifier;
@property (copy) NSDictionary *providerConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)matchPrivateLTENetworks;
- (id)matchSSIDs;
- (bool)overlapsWithConfiguration:(id)arg1;
- (id)pluginType;
- (id)providerBundleIdentifier;
- (id)providerConfiguration;
- (void)setEnabled:(bool)arg1;
- (void)setMatchPrivateLTENetworks:(id)arg1;
- (void)setMatchSSIDs:(id)arg1;
- (void)setPluginType:(id)arg1;
- (void)setProviderBundleIdentifier:(id)arg1;
- (void)setProviderConfiguration:(id)arg1;

@end
