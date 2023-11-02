
@protocol CALNSnoozeUpdateTimer <NSObject>

@required

- (<CALNSnoozeUpdateTimerDelegate> *)delegate;
- (void)setDelegate:(id <CALNSnoozeUpdateTimerDelegate>)arg1;
- (void)setFireDate:(NSDate *)arg1 leeway:(double)arg2 forEventWithIdentifier:(NSString *)arg3;

@end
