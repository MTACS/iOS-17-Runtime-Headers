
@interface _MKFZone : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFZone, MKFZonePrivateExtensions>

@property (nonatomic, readonly, copy) MKFZoneDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, retain) NSArray *rooms;
@property (nonatomic, retain) NSSet *rooms_;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (void)addRoomsObject:(id)arg1;
- (id)castIfZone;
- (id)databaseID;
- (void)removeRoomsObject:(id)arg1;
- (id)rooms;

@end
