
@interface _MKFDurationEvent : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFDurationEvent, MKFDurationEventPrivateExtensions>

@property (nonatomic, readonly, copy) MKFDurationEventDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *duration;
@property (nonatomic, copy) NSNumber *endEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) <MKFEventTrigger> *trigger;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfDurationEvent;
- (id)databaseID;
- (id)home;

@end
