
@interface _MKFHomeNetworkRouterSetting : _MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeNetworkRouterSetting, MKFHomeNetworkRouterSettingPrivateExtensions>

@property (nonatomic, copy) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (nonatomic, readonly, copy) MKFHomeNetworkRouterSettingDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, copy) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;
@property (nonatomic, copy) NSString *minimumNetworkRouterSupportHomeKitVersion;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) _MKFHAPAccessory *networkAccessory;
@property (nonatomic, retain) <MKFHAPAccessory> *networkAccessory;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfHomeNetworkRouterSetting;
- (id)databaseID;

@end
