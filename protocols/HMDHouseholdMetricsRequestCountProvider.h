
@protocol HMDHouseholdMetricsRequestCountProvider

@required

- (void)incrementRequestCountForHomeUUID:(NSUUID *)arg1 date:(NSDate *)arg2;

@end
