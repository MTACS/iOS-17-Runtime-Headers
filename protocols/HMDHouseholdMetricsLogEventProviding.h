
@protocol HMDHouseholdMetricsLogEventProviding

@required

- (NSDictionary *)householdMetricsForHomeWithUUID:(NSUUID *)arg1 associatedWithDate:(NSDate *)arg2;

@end
