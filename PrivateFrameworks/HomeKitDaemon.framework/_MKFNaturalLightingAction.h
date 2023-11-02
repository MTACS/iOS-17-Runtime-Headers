
@interface _MKFNaturalLightingAction : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFNaturalLightingAction, MKFNaturalLightingActionPrivateExtensions>

@property (nonatomic, retain) _MKFHAPAccessory *accessory;
@property (nonatomic, retain) <MKFHAPAccessory> *accessory;
@property (nonatomic, readonly, retain) <MKFActionSet> *actionSet;
@property (nonatomic, readonly, copy) MKFNaturalLightingActionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, copy) NSUUID *lightProfileUUID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSNumber *naturalLightingEnabledField;
@property (nonatomic, retain) NSSet *serviceUUIDs;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfNaturalLightingAction;
- (id)databaseID;
- (id)home;

@end
