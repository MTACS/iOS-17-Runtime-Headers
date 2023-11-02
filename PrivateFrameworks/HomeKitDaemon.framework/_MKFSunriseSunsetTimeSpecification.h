
@interface _MKFSunriseSunsetTimeSpecification : _MKFBulletinTimeSpecification <MKFSunriseSunsetTimeSpecification, MKFSunriseSunsetTimeSpecificationPrivateExtensions>

@property (nonatomic, readonly, copy) MKFSunriseSunsetTimeSpecificationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MKFTimePeriodBulletinCondition> *endCondition;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) NSDateComponents *offset;
@property (nonatomic, copy) NSNumber *offsetSeconds;
@property (nonatomic, copy) NSString *significantEvent;
@property (nonatomic, retain) <MKFTimePeriodBulletinCondition> *startCondition;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;

- (id)castIfSunriseSunsetTimeSpecification;
- (id)databaseID;

@end
