
@interface _MKFAppleMediaAccessoryPowerAction : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAppleMediaAccessoryPowerAction, MKFAppleMediaAccessoryPowerActionPrivateExtensions>

@property (nonatomic, retain) _MKFAppleMediaAccessory *accessory;
@property (nonatomic, retain) <MKFAppleMediaAccessory> *accessory;
@property (nonatomic, readonly, retain) <MKFActionSet> *actionSet;
@property (nonatomic, readonly, copy) MKFAppleMediaAccessoryPowerActionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *targetSleepWakeState;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfAppleMediaAccessoryPowerAction;
- (id)databaseID;
- (id)home;

@end
