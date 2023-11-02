
@interface _MKFTrigger : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFTrigger, MKFTriggerPrivateExtensions>

@property (nonatomic, retain) NSArray *actionSets;
@property (nonatomic, retain) NSSet *actionSets_;
@property (nonatomic, copy) NSNumber *active;
@property (nonatomic, copy) NSNumber *autoDelete;
@property (nonatomic, copy) NSString *configuredName;
@property (nonatomic, readonly, copy) MKFTriggerDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSDate *mostRecentFireDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) _MKFUser *owner;
@property (nonatomic, retain) <MKFUser> *owner;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)actionSets;
- (void)addActionSetsObject:(id)arg1;
- (id)castIfTrigger;
- (id)databaseID;
- (void)removeActionSetsObject:(id)arg1;
- (void)setActionSets:(id)arg1;

@end
