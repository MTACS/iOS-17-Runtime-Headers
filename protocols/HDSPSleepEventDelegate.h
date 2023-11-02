
@protocol HDSPSleepEventDelegate <NSObject>

@required

- (void)eventProviderCancelledEvents:(id <HDSPSleepEventProvider>)arg1;
- (void)eventProviderHasUpcomingEvents:(id <HDSPSleepEventProvider>)arg1;

@end
