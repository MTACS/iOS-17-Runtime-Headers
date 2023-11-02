
@interface HMDHomeNetworkRouterManagingDeviceSettingsModel : HMDHomeSettingsBaseModel

@property (nonatomic, copy) NSString *primaryNetworkRouterManagingDeviceUUID;

+ (id)defaultModelForHomeUUID:(id)arg1;
+ (id)modelIDForHomeUUID:(id)arg1;
+ (id)modelNamespace;
+ (id)properties;

- (id)dependentUUIDs;

@end
