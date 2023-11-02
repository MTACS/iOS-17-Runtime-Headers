
@protocol HMSymptomsHandlerDelegate <NSObject>

@optional

- (void)fixSessionAvailabilityDidUpdateForSymptomsHandler:(HMSymptomsHandler *)arg1;
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateSymptoms:(NSSet *)arg2;

@end
