
@interface _MKFDevice : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFDevice, MKFDevicePrivateExtensions>

@property (nonatomic, retain) _MKFAppleMediaAccessory *accessoryAppleMedia;
@property (nonatomic, readonly, retain) <MKFAppleMediaAccessory> *accessoryAppleMedia;
@property (nonatomic, retain) _MKFAccount *account;
@property (nonatomic, readonly, retain) <MKFAccount> *account;
@property (nonatomic, readonly, copy) MKFDeviceDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *handles;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSUUID *mediaRouteID;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) _MKFHome *primaryResidentOf;
@property (nonatomic, retain) <MKFHome> *primaryResidentOf;
@property (nonatomic, retain) HMFProductInfo *productInfo;
@property (nonatomic, retain) _MKFResident *resident;
@property (nonatomic, retain) <MKFResident> *resident;
@property (nonatomic, retain) HMDRPIdentity *rpIdentity;
@property (nonatomic, retain) _MKFHomeNetworkRouterManagingDeviceSetting *settingRouterManager;
@property (nonatomic, retain) <MKFHomeNetworkRouterManagingDeviceSetting> *settingRouterManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDHomeKitVersion *version;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfDevice;
- (id)databaseID;

@end
