
@interface _MKFHomePersonManagerSetting : _MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomePersonManagerSetting, MKFHomePersonManagerSettingPrivateExtensions>

@property (nonatomic, readonly, copy) MKFHomePersonManagerSettingDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;
@property (nonatomic, copy) NSUUID *zoneUUID;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfHomePersonManagerSetting;
- (id)databaseID;

@end
