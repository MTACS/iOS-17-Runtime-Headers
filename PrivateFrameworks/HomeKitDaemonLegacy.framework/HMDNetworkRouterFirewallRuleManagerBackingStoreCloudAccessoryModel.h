
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudAccessoryModel : HMBModel <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *networkDeclarationsData;
@property (nonatomic, retain) NSData *pairedMetadataData;
@property (readonly) Class superclass;

+ (id)hmbProperties;
+ (id)logCategory;
+ (id)modelIDForRecordID:(id)arg1;
+ (id)namespaceID;

- (id)initWithCloudZoneID:(id)arg1 recordID:(id)arg2 networkDeclarationsData:(id)arg3;
- (id)initWithCloudZoneID:(id)arg1 recordID:(id)arg2 networkDeclarationsData:(id)arg3 pairedMetadataData:(id)arg4;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2 networkDeclarationsData:(id)arg3;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2 networkDeclarationsData:(id)arg3 pairedMetadataData:(id)arg4;

@end
