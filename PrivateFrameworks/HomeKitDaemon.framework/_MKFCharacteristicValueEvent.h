
@interface _MKFCharacteristicValueEvent : _MKFCharacteristicEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicValueEvent, MKFCharacteristicValueEventPrivateExtensions>

@property (nonatomic, copy) NSNumber *characteristicID;
@property (nonatomic, readonly, copy) MKFCharacteristicValueEventDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endEvent;
@property (nonatomic, retain) NSObject *eventValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) <MKFService> *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) <MKFEventTrigger> *trigger;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfCharacteristicValueEvent;
- (id)databaseID;
- (id)home;
- (bool)validateEventValue:(id*)arg1 error:(id*)arg2;

@end
