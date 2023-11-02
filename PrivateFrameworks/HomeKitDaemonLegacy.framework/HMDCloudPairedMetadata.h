
@interface HMDCloudPairedMetadata : HMFObject <HMFLogging> {
    HMDNetworkRouterFirewallRuleAccessoryIdentifier * _baseAccessoryIdentifier;
    NSArray * _versionConfigurations;
}

@property (nonatomic, readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier *baseAccessoryIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *prettyJSONDictionary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *versionConfigurations;

+ (id)__decodeVersionConfigurationWithVersionString:(id)arg1 versionConfigurationValue:(id)arg2 baseAccessoryIdentifier:(id)arg3;
+ (id)_decodeVersionConfigurationsFromJSONDictionary:(id)arg1 baseAccessoryIdentifier:(id)arg2 allowUnzippedData:(bool)arg3;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)baseAccessoryIdentifier;
- (id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2;
- (id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2 allowUnzippedData:(bool)arg3;
- (id)initWithBaseAccessoryIdentifier:(id)arg1 versionConfigurations:(id)arg2;
- (id)prettyJSONDictionary;
- (id)versionConfigurations;

@end
