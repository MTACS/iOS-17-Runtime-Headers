
@interface _MKFAccessoryNetworkProtectionGroup : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessoryNetworkProtectionGroup, MKFAccessoryNetworkProtectionGroupPrivateExtensions>

@property (nonatomic, copy) NSNumber *category;
@property (nonatomic, readonly, copy) MKFAccessoryNetworkProtectionGroupDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *targetProtectionMode;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfAccessoryNetworkProtectionGroup;
- (id)databaseID;

@end
