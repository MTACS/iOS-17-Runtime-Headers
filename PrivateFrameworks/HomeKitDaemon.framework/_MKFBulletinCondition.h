
@interface _MKFBulletinCondition : _MKFModel <MKFBulletinCondition, MKFBulletinConditionPrivateExtensions>

@property (nonatomic, retain) _MKFBulletinRegistration *bulletinRegistration;
@property (nonatomic, readonly, retain) <MKFBulletinRegistration> *bulletinRegistration;
@property (nonatomic, readonly, copy) MKFBulletinConditionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfBulletinCondition;
- (id)databaseID;
- (id)home;

@end
