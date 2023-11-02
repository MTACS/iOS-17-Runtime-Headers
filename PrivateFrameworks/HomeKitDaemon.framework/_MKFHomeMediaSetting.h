
@interface _MKFHomeMediaSetting : _MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeMediaSetting, MKFHomeMediaSettingPrivateExtensions>

@property (nonatomic, readonly, copy) MKFHomeMediaSettingDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, copy) NSString *mediaPassword;
@property (nonatomic, copy) NSNumber *mediaPeerToPeerEnabled;
@property (nonatomic, copy) NSNumber *minimumMediaUserPrivilege;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfHomeMediaSetting;
- (id)databaseID;

@end
