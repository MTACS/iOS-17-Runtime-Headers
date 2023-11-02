
@interface _MKFPresenceBulletinCondition : _MKFBulletinCondition <MKFPresenceBulletinCondition, MKFPresenceBulletinConditionPrivateExtensions>

@property (nonatomic, readonly, retain) <MKFBulletinRegistration> *bulletinRegistration;
@property (nonatomic, readonly, copy) MKFPresenceBulletinConditionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSNumber *presenceEventType;
@property (nonatomic, copy) NSNumber *presenceEventUserType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSArray *users;
@property (nonatomic, retain) NSSet *users_;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (void)addUsersObject:(id)arg1;
- (id)castIfPresenceBulletinCondition;
- (id)databaseID;
- (id)findUsersRelationWithModelID:(id)arg1;
- (id)home;
- (id)materializeOrCreateUsersRelationWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (void)removeUsersObject:(id)arg1;
- (id)users;

@end
