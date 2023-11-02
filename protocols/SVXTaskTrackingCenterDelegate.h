
@protocol SVXTaskTrackingCenterDelegate <NSObject>

@required

- (void)taskTrackingCenter:(SVXTaskTrackingCenter *)arg1 didBeginTrackingTaskWithContext:(SVXTaskContext *)arg2;
- (void)taskTrackingCenter:(SVXTaskTrackingCenter *)arg1 didEndTrackingTaskWithContext:(SVXTaskContext *)arg2;
- (void)taskTrackingCenterDidBecomeIdle:(SVXTaskTrackingCenter *)arg1;
- (void)taskTrackingCenterWillBecomeBusy:(SVXTaskTrackingCenter *)arg1;

@end
