
@interface _MKFServiceGroup : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFServiceGroup, MKFServiceGroupPrivateExtensions>

@property (nonatomic, retain) <MKFApplicationData> *applicationData;
@property (nonatomic, retain) _MKFApplicationData *applicationData;
@property (nonatomic, readonly, copy) MKFServiceGroupDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, retain) NSArray *services;
@property (nonatomic, retain) NSSet *services_;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (void)addServicesObject:(id)arg1;
- (id)castIfServiceGroup;
- (id)databaseID;
- (id)materializeOrCreateApplicationDataRelation:(bool*)arg1;
- (void)removeServicesObject:(id)arg1;
- (id)services;

@end
