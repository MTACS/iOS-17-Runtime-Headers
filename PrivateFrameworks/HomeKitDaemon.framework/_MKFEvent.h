
@interface _MKFEvent : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEvent, MKFEventPrivateExtensions>

@property (nonatomic, readonly, copy) MKFEventDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, retain) _MKFEventTrigger *trigger;
@property (nonatomic, readonly, retain) <MKFEventTrigger> *trigger;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfEvent;
- (id)databaseID;
- (id)home;

@end
