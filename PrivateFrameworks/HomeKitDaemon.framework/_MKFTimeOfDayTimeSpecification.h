
@interface _MKFTimeOfDayTimeSpecification : _MKFBulletinTimeSpecification <MKFTimeOfDayTimeSpecification, MKFTimeOfDayTimeSpecificationPrivateExtensions>

@property (nonatomic, readonly, copy) MKFTimeOfDayTimeSpecificationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MKFTimePeriodBulletinCondition> *endCondition;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *hour;
@property (nonatomic, copy) NSNumber *minute;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) <MKFTimePeriodBulletinCondition> *startCondition;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;

- (id)castIfTimeOfDayTimeSpecification;
- (id)databaseID;

@end
