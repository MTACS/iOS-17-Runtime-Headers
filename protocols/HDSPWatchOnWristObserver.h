
@protocol HDSPWatchOnWristObserver <NSObject>

@required

- (void)detectedOffWristOnDate:(NSDate *)arg1;
- (void)detectedOnWristOnDate:(NSDate *)arg1;

@optional

- (void)wristDetectEnabledDidChange;

@end
