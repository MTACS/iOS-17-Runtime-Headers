
@interface _MKFBulletinRegistration : _MKFModel <MKFBulletinRegistration, MKFBulletinRegistrationPrivateExtensions>

@property (nonatomic, readonly, retain) NSArray *conditions;
@property (nonatomic, retain) NSSet *conditions_;
@property (nonatomic, readonly, copy) MKFBulletinRegistrationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceIdsDestination;
@property (nonatomic, copy) NSUUID *deviceIdsIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) <MKFHome> *home;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, retain) _MKFUser *user;
@property (nonatomic, readonly, retain) <MKFUser> *user;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (void)addConditionsObject:(id)arg1;
- (id)castIfBulletinRegistration;
- (id)conditions;
- (id)createConditionsRelationOfType:(id)arg1 modelID:(id)arg2;
- (id)createConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg1;
- (id)createConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg1;
- (id)databaseID;
- (id)findConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg1;
- (id)findConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg1;
- (id)home;
- (id)materializeOrCreateConditionsRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(bool*)arg3;
- (id)materializeOrCreateConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (void)removeConditionsObject:(id)arg1;
- (void)residentSyncContextualizeConditions:(id)arg1 userContext:(id)arg2;

@end
