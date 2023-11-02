
@protocol MKFBulletinTimeSpecification <MKFModel, MKFBulletinTimeSpecificationPublicExtensions>

@required

- (MKFBulletinTimeSpecificationDatabaseID *)databaseID;
- (<MKFTimePeriodBulletinCondition> *)endCondition;
- (void)setEndCondition:(id <MKFTimePeriodBulletinCondition>)arg1;
- (void)setStartCondition:(id <MKFTimePeriodBulletinCondition>)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (<MKFTimePeriodBulletinCondition> *)startCondition;
- (NSDate *)writerTimestamp;

@end
