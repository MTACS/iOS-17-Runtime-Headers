
@interface HMDHomeNetworkRouterSettingsModel : HMDHomeSettingsBaseModel

@property (nonatomic, copy) NSString *activeNetworkRouterAccessoryUUID;
@property (nonatomic, copy) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (nonatomic, copy) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;
@property (nonatomic, copy) NSString *minimumNetworkRouterSupportHomeKitVersion;

+ (id)defaultModelForHomeUUID:(id)arg1;
+ (id)modelIDForHomeUUID:(id)arg1;
+ (id)modelNamespace;
+ (id)properties;

- (id)dependentUUIDs;

@end
