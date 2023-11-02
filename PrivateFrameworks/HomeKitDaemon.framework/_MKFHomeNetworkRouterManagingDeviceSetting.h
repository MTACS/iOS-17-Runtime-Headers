
@interface _MKFHomeNetworkRouterManagingDeviceSetting : _MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeNetworkRouterManagingDeviceSetting, MKFHomeNetworkRouterManagingDeviceSettingPrivateExtensions>

@property (nonatomic, readonly, copy) MKFHomeNetworkRouterManagingDeviceSettingDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _MKFDevice *device;
@property (nonatomic, retain) <MKFDevice> *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfHomeNetworkRouterManagingDeviceSetting;
- (id)databaseID;

@end
