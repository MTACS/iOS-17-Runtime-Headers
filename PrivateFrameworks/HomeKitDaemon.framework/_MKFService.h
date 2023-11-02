
@interface _MKFService : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFService, MKFServicePrivateExtensions>

@property (nonatomic, retain) _MKFHAPAccessory *accessory;
@property (nonatomic, readonly, retain) <MKFHAPAccessory> *accessory;
@property (nonatomic, readonly, retain) NSArray *actionCharacteristicWrites;
@property (nonatomic, retain) NSSet *actionCharacteristicWrites_;
@property (nonatomic, retain) _MKFApplicationData *applicationData;
@property (nonatomic, retain) <MKFApplicationData> *applicationData;
@property (nonatomic, copy) NSUUID *associatedServiceType;
@property (nonatomic, retain) NSArray *characteristics;
@property (nonatomic, retain) NSSet *characteristics_;
@property (nonatomic, copy) NSNumber *configurationState;
@property (nonatomic, readonly, copy) MKFServiceDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSArray *eventCharacteristics;
@property (nonatomic, retain) NSSet *eventCharacteristics_;
@property (nonatomic, copy) NSString *expectedConfiguredName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, copy) NSNumber *instanceID;
@property (nonatomic, readonly, copy) NSNumber *instanceID;
@property (nonatomic, copy) NSNumber *labelIndex;
@property (nonatomic, copy) NSNumber *labelNamespace;
@property (nonatomic, copy) NSNumber *lastKnownDiscoveryMode;
@property (nonatomic, copy) NSNumber *lastKnownOperatingState;
@property (nonatomic, copy) NSNumber *lastKnownOperatingStateAbnormalReasons;
@property (nonatomic, retain) NSArray *linkedServices;
@property (nonatomic, retain) NSArray *mediaSourceDisplayOrder;
@property (nonatomic, copy) NSNumber *mediaSourceIdentifier;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *providedName;
@property (nonatomic, readonly, retain) NSArray *serviceGroups;
@property (nonatomic, retain) NSSet *serviceGroups_;
@property (nonatomic, copy) NSNumber *serviceProperties;
@property (nonatomic, copy) NSUUID *serviceSubtype;
@property (nonatomic, copy) NSUUID *serviceType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForKeyAttribute:(id)arg1 parent:(id)arg2;

- (id)actionCharacteristicWrites;
- (id)castIfService;
- (id)characteristics;
- (id)createCharacteristicsRelationOfType:(id)arg1 instanceID:(id)arg2;
- (id)createCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(id)arg1;
- (id)createCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(id)arg1;
- (id)createCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(id)arg1;
- (id)createCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(id)arg1;
- (id)databaseID;
- (id)eventCharacteristics;
- (id)findCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(id)arg1;
- (id)findCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(id)arg1;
- (id)findCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(id)arg1;
- (id)findCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(id)arg1;
- (id)home;
- (id)materializeOrCreateApplicationDataRelation:(bool*)arg1;
- (id)materializeOrCreateCharacteristicsRelationOfType:(id)arg1 instanceID:(id)arg2 createdNew:(bool*)arg3;
- (id)materializeOrCreateCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(id)arg1 createdNew:(bool*)arg2;
- (id)pr_findCharacteristicWithInstanceID:(id)arg1;
- (id)serviceGroups;
- (void)setCharacteristics:(id)arg1;
- (void)synchronizeCharacteristicsRelationWith:(id)arg1;

@end
