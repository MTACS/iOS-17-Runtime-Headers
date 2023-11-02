
@interface _MKFAction : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAction, MKFActionPrivateExtensions>

@property (nonatomic, retain) _MKFActionSet *actionSet;
@property (nonatomic, readonly, retain) <MKFActionSet> *actionSet;
@property (nonatomic, readonly, copy) MKFActionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfAction;
- (id)databaseID;
- (id)home;

@end
