
@protocol HKPPTController

@required

- (void)failedTest:(id <HKPPTDriver>)arg1 results:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)finishedTest:(id <HKPPTDriver>)arg1 extraResults:(NSDictionary *)arg2;
- (void)invalidConfigurationForTest:(id <HKPPTDriver>)arg1 error:(NSError *)arg2;
- (void)startedTest:(id <HKPPTDriver>)arg1;

@end
