
@protocol MKFTimeOfDayTimeSpecification <MKFBulletinTimeSpecification, MKFTimeOfDayTimeSpecificationPublicExtensions>

@required

- (MKFTimeOfDayTimeSpecificationDatabaseID *)databaseID;
- (NSNumber *)hour;
- (NSNumber *)minute;
- (void)setHour:(NSNumber *)arg1;
- (void)setMinute:(NSNumber *)arg1;

@end
