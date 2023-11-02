
@protocol ATXUserMetricsLog

@required

- (double)enrollmentPeriod;
- (double)enrollmentRate;
- (PBCodable *)getPBCodableWithUserId:(NSString *)arg1;
- (NSString *)scheme;

@end
