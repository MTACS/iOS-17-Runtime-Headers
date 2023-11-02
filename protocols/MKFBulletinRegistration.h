
@protocol MKFBulletinRegistration <MKFModel, MKFBulletinRegistrationPublicExtensions>

@required

- (void)addConditionsObject:(id <MKFBulletinCondition>)arg1;
- (NSArray *)conditions;
- (<MKFBulletinCondition> *)createConditionsRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (<MKFPresenceBulletinCondition> *)createConditionsRelationOfTypePresenceBulletinConditionWithModelID:(NSUUID *)arg1;
- (<MKFTimePeriodBulletinCondition> *)createConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(NSUUID *)arg1;
- (MKFBulletinRegistrationDatabaseID *)databaseID;
- (NSString *)deviceIdsDestination;
- (NSUUID *)deviceIdsIdentifier;
- (<MKFPresenceBulletinCondition> *)findConditionsRelationOfTypePresenceBulletinConditionWithModelID:(NSUUID *)arg1;
- (<MKFTimePeriodBulletinCondition> *)findConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(NSUUID *)arg1;
- (<MKFHome> *)home;
- (<MKFBulletinCondition> *)materializeOrCreateConditionsRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(bool*)arg3;
- (<MKFPresenceBulletinCondition> *)materializeOrCreateConditionsRelationOfTypePresenceBulletinConditionWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFTimePeriodBulletinCondition> *)materializeOrCreateConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (void)removeConditionsObject:(id <MKFBulletinCondition>)arg1;
- (void)setDeviceIdsDestination:(NSString *)arg1;
- (void)setDeviceIdsIdentifier:(NSUUID *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (<MKFUser> *)user;
- (NSDate *)writerTimestamp;

@end
