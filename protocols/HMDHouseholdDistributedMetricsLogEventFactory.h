
@protocol HMDHouseholdDistributedMetricsLogEventFactory <HMDHouseholdMetricsLogEventFactory>

@required

- (NSArray *)coalescedLogEventsFromLogEvents:(NSArray *)arg1 homeUUID:(NSUUID *)arg2;
- (NSArray *)logEventsFromDictionary:(NSDictionary *)arg1;
- (NSDictionary *)serializeLogEvents:(NSArray *)arg1;

@end
