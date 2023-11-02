
@protocol HDSPWakeDetectorDelegate <NSObject>

@required

- (void)wakeDetector:(id <HDSPWakeDetector>)arg1 didDetectWakeUpEventOnDate:(NSDate *)arg2;

@end
