
@interface HMDNetworkRouterFirewallRuleManagerOverrideParser : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_parseOverrideNetworkDeclarationsWithProductGroup:(id)arg1 productNumber:(id)arg2 productNumberDictionary:(id)arg3 accessoryIdentifier:(id)arg4;
+ (id)_parseOverridePairedMetadataWithProductGroup:(id)arg1 productNumber:(id)arg2 productNumberDictionary:(id)arg3 accessoryIdentifier:(id)arg4;
+ (id)logCategory;
+ (id)parseFromData:(id)arg1;

@end
