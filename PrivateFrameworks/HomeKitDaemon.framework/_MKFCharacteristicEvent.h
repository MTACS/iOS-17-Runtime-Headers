
@interface _MKFCharacteristicEvent : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicEvent, MKFCharacteristicEventPrivateExtensions>

@property (nonatomic, copy) NSNumber *characteristicID;
@property (nonatomic, readonly, copy) MKFCharacteristicEventDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) _MKFService *service;
@property (nonatomic, retain) <MKFService> *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) <MKFEventTrigger> *trigger;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfCharacteristicEvent;
- (id)databaseID;
- (id)home;
- (bool)validateForInsertOrUpdate:(id*)arg1;

@end
