
@interface HMDCloudPairedMetadataVersionConfiguration : HMFObject <HMFLogging> {
    HMDNetworkRouterFirewallRuleAccessoryIdentifier * _accessoryIdentifier;
    HMDCloudPairedMetadataDiagnostics * _diagnostics;
}

@property (nonatomic, readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDCloudPairedMetadataDiagnostics *diagnostics;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *prettyJSONDictionary;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)attributeDescriptions;
- (id)diagnostics;
- (id)initWithAccessoryIdentifier:(id)arg1 diagnostics:(id)arg2;
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2;
- (id)prettyJSONDictionary;

@end
