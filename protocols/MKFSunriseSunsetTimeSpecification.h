
@protocol MKFSunriseSunsetTimeSpecification <MKFBulletinTimeSpecification, MKFSunriseSunsetTimeSpecificationPublicExtensions>

@required

- (MKFSunriseSunsetTimeSpecificationDatabaseID *)databaseID;
- (NSNumber *)offsetSeconds;
- (void)setOffsetSeconds:(NSNumber *)arg1;
- (void)setSignificantEvent:(NSString *)arg1;
- (NSString *)significantEvent;

@end
