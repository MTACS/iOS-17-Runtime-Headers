
@protocol HDSPSleepEventProvider <NSObject>

@required

- (NSString *)providerIdentifier;
- (void)setSleepEventDelegate:(id <HDSPSleepEventDelegate>)arg1;
- (<HDSPSleepEventDelegate> *)sleepEventDelegate;
- (NSArray *)upcomingEventsDueAfterDate:(NSDate *)arg1;

@end
