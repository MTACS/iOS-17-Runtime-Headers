
@interface HMDNetworkRouterFirewallRuleCloudNetworkDeclarations : HMFObject <HMFLogging> {
    HMDNetworkRouterFirewallRuleAccessoryIdentifier * _baseAccessoryIdentifier;
    NSDate * _lastModifiedTime;
    NSString * _name;
    NSArray * _ruleConfigurations;
    NSDictionary * _ruleConfigurationsByVersionString;
}

@property (nonatomic, readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier *baseAccessoryIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastModifiedTime;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *prettyJSONDictionary;
@property (nonatomic, readonly) NSArray *ruleConfigurations;
@property (readonly, copy) NSDictionary *ruleConfigurationsByVersionString;
@property (readonly) Class superclass;

+ (id)__decodeRuleConfigurationWithVersionString:(id)arg1 ruleConfigurationValue:(id)arg2 baseAccessoryIdentifier:(id)arg3;
+ (id)__decodeRuleConfigurationsFromJSONDictionary:(id)arg1 baseAccessoryIdentifier:(id)arg2 allowUnzippedData:(bool)arg3;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)baseAccessoryIdentifier;
- (unsigned long long)hash;
- (id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2;
- (id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2 allowUnzippedData:(bool)arg3;
- (id)initWithBaseAccessoryIdentifier:(id)arg1 name:(id)arg2 lastModifiedTime:(id)arg3 ruleConfigurationsByVersionString:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)lastModifiedTime;
- (id)name;
- (id)prettyJSONDictionary;
- (id)ruleConfigurations;
- (id)ruleConfigurationsByVersionString;

@end
