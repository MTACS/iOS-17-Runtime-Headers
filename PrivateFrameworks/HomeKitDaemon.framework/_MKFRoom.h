
@interface _MKFRoom : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFRoom, MKFRoomPrivateExtensions>

@property (nonatomic, readonly, retain) NSArray *accessories;
@property (nonatomic, retain) NSSet *accessories_;
@property (nonatomic, retain) _MKFApplicationData *applicationData;
@property (nonatomic, retain) <MKFApplicationData> *applicationData;
@property (nonatomic, readonly, copy) MKFRoomDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, retain) _MKFHome *homeDefault;
@property (nonatomic, readonly, retain) <MKFHome> *homeDefault;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;
@property (nonatomic, readonly, retain) NSArray *zones;
@property (nonatomic, retain) NSSet *zones_;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)accessories;
- (id)castIfRoom;
- (id)databaseID;
- (id)materializeOrCreateApplicationDataRelation:(bool*)arg1;
- (id)zones;

@end
