
@protocol HMDHouseholdMetricsLogEventFactory

@required

- (void)deleteCountersAfterDate:(NSDate *)arg1;
- (void)deleteCountersBeforeDate:(NSDate *)arg1;
- (NSArray *)logEventsPopulatedForHomeWithUUID:(NSUUID *)arg1 associatedWithDate:(NSDate *)arg2;

@end
