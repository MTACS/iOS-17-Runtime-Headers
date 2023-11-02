
@protocol CAMViewfinderActionIntervalometerDelegate <NSObject>

@required

- (bool)shouldAttemptAction;

@optional

- (bool)executeAction;
- (void)intervalometerDidReachMaximumCount:(CAMViewfinderActionIntervalometer *)arg1;

@end
