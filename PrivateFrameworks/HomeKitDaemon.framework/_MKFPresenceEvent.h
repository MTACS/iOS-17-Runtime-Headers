
@interface _MKFPresenceEvent : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFPresenceEvent, MKFPresenceEventPrivateExtensions>

@property (nonatomic, copy) NSNumber *activation;
@property (nonatomic, readonly, copy) MKFPresenceEventDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *presenceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) <MKFEventTrigger> *trigger;
@property (nonatomic, readonly, retain) NSArray *users;
@property (nonatomic, retain) NSSet *users_;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (void)addUsersObject:(id)arg1;
- (id)castIfPresenceEvent;
- (id)databaseID;
- (id)home;
- (void)removeUsersObject:(id)arg1;
- (bool)synchronizeUsersRelationWith:(id)arg1;
- (id)users;
- (bool)validateForInsertOrUpdate:(id*)arg1;

@end
