
@interface _MKFCharacteristicWriteAction : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicWriteAction, MKFCharacteristicWriteActionPrivateExtensions>

@property (nonatomic, retain) _MKFHAPAccessory *accessory;
@property (nonatomic, retain) <MKFHAPAccessory> *accessory;
@property (nonatomic, readonly, retain) <MKFActionSet> *actionSet;
@property (nonatomic, copy) NSNumber *characteristicID;
@property (nonatomic, readonly, copy) MKFCharacteristicWriteActionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) <MKFService> *service;
@property (nonatomic, retain) _MKFService *service;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject *targetValue;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfCharacteristicWriteAction;
- (id)databaseID;
- (id)home;
- (bool)validateForInsertOrUpdate:(id*)arg1;
- (bool)validateTargetValue:(id*)arg1 error:(id*)arg2;
- (void)willSave;

@end
