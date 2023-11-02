
@protocol MKFActionSet <MKFModel, MKFActionSetPublicExtensions>

@required

- (NSArray *)actions;
- (<MKFApplicationData> *)applicationData;
- (<MKFAction> *)createActionsRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (<MKFAppleMediaAccessoryPowerAction> *)createActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(NSUUID *)arg1;
- (<MKFCharacteristicWriteAction> *)createActionsRelationOfTypeCharacteristicWriteActionWithModelID:(NSUUID *)arg1;
- (<MKFMediaPlaybackAction> *)createActionsRelationOfTypeMediaPlaybackActionWithModelID:(NSUUID *)arg1;
- (<MKFNaturalLightingAction> *)createActionsRelationOfTypeNaturalLightingActionWithModelID:(NSUUID *)arg1;
- (<MKFShortcutAction> *)createActionsRelationOfTypeShortcutActionWithModelID:(NSUUID *)arg1;
- (MKFActionSetDatabaseID *)databaseID;
- (<MKFAppleMediaAccessoryPowerAction> *)findActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(NSUUID *)arg1;
- (<MKFCharacteristicWriteAction> *)findActionsRelationOfTypeCharacteristicWriteActionWithModelID:(NSUUID *)arg1;
- (<MKFMediaPlaybackAction> *)findActionsRelationOfTypeMediaPlaybackActionWithModelID:(NSUUID *)arg1;
- (<MKFNaturalLightingAction> *)findActionsRelationOfTypeNaturalLightingActionWithModelID:(NSUUID *)arg1;
- (<MKFShortcutAction> *)findActionsRelationOfTypeShortcutActionWithModelID:(NSUUID *)arg1;
- (<MKFHome> *)home;
- (NSDate *)lastExecutionDate;
- (<MKFAction> *)materializeOrCreateActionsRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(bool*)arg3;
- (<MKFAppleMediaAccessoryPowerAction> *)materializeOrCreateActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFCharacteristicWriteAction> *)materializeOrCreateActionsRelationOfTypeCharacteristicWriteActionWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFMediaPlaybackAction> *)materializeOrCreateActionsRelationOfTypeMediaPlaybackActionWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFNaturalLightingAction> *)materializeOrCreateActionsRelationOfTypeNaturalLightingActionWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFShortcutAction> *)materializeOrCreateActionsRelationOfTypeShortcutActionWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFApplicationData> *)materializeOrCreateApplicationDataRelation:(bool*)arg1;
- (NSString *)name;
- (void)setApplicationData:(id <MKFApplicationData>)arg1;
- (void)setLastExecutionDate:(NSDate *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (void)synchronizeActionsRelationWith:(NSArray *)arg1;
- (NSArray *)triggers;
- (NSString *)type;
- (NSDate *)writerTimestamp;

@end
