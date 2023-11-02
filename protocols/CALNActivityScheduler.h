
@protocol CALNActivityScheduler <NSObject>

@required

- (<CALNActivitySchedulerDelegate> *)delegate;
- (void)scheduleWithTimeInterval:(long long)arg1 gracePeriod:(long long)arg2;
- (void)setDelegate:(id <CALNActivitySchedulerDelegate>)arg1;
- (void)unschedule;

@end
