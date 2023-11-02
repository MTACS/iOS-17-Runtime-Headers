
@interface _MKFCharacteristicRangeEvent : _MKFCharacteristicEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicRangeEvent, MKFCharacteristicRangeEventPrivateExtensions>

@property (nonatomic, copy) NSNumber *characteristicID;
@property (nonatomic, readonly, copy) MKFCharacteristicRangeEventDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, retain) NSObject *max;
@property (nonatomic, retain) NSObject *min;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) <MKFService> *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) <MKFEventTrigger> *trigger;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfCharacteristicRangeEvent;
- (id)databaseID;
- (id)home;
- (bool)validateForInsertOrUpdate:(id*)arg1;
- (bool)validateMax:(id*)arg1 error:(id*)arg2;
- (bool)validateMin:(id*)arg1 error:(id*)arg2;

@end
