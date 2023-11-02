
@interface _MKFActionSet : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFActionSet, MKFActionSetPrivateExtensions>

@property (nonatomic, readonly, retain) NSArray *actions;
@property (nonatomic, retain) NSSet *actions_;
@property (nonatomic, retain) _MKFApplicationData *applicationData;
@property (nonatomic, retain) <MKFApplicationData> *applicationData;
@property (nonatomic, readonly, copy) MKFActionSetDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, copy) NSDate *lastExecutionDate;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSArray *triggers;
@property (nonatomic, retain) NSSet *triggers_;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)actions;
- (id)castIfActionSet;
- (id)createActionsRelationOfType:(id)arg1 modelID:(id)arg2;
- (id)createActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)arg1;
- (id)createActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)arg1;
- (id)createActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)arg1;
- (id)createActionsRelationOfTypeNaturalLightingActionWithModelID:(id)arg1;
- (id)createActionsRelationOfTypeShortcutActionWithModelID:(id)arg1;
- (id)databaseID;
- (id)findActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)arg1;
- (id)findActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)arg1;
- (id)findActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)arg1;
- (id)findActionsRelationOfTypeNaturalLightingActionWithModelID:(id)arg1;
- (id)findActionsRelationOfTypeShortcutActionWithModelID:(id)arg1;
- (id)materializeOrCreateActionsRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(bool*)arg3;
- (id)materializeOrCreateActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateActionsRelationOfTypeNaturalLightingActionWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateActionsRelationOfTypeShortcutActionWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateApplicationDataRelation:(bool*)arg1;
- (void)synchronizeActionsRelationWith:(id)arg1;
- (id)triggers;

@end
