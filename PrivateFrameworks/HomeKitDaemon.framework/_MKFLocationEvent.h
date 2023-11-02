
@interface _MKFLocationEvent : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFLocationEvent, MKFLocationEventPrivateExtensions>

@property (nonatomic, readonly, copy) MKFLocationEventDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) CLRegion *region;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) <MKFEventTrigger> *trigger;
@property (nonatomic, retain) _MKFUser *user;
@property (nonatomic, retain) <MKFUser> *user;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (void)addUserObject:(id)arg1;
- (id)castIfLocationEvent;
- (id)databaseID;
- (id)home;
- (void)removeUserObject:(id)arg1;
- (bool)synchronizeUserRelationWith:(id)arg1;

@end
