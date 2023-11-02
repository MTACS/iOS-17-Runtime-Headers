
@interface _MKFBulletinTimeSpecification : _MKFModel <MKFBulletinTimeSpecification, MKFBulletinTimeSpecificationPrivateExtensions>

@property (nonatomic, readonly, copy) MKFBulletinTimeSpecificationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _MKFTimePeriodBulletinCondition *endCondition;
@property (nonatomic, retain) <MKFTimePeriodBulletinCondition> *endCondition;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) <MKFTimePeriodBulletinCondition> *startCondition;
@property (nonatomic, retain) _MKFTimePeriodBulletinCondition *startCondition;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;

- (id)castIfBulletinTimeSpecification;
- (id)databaseID;

@end
