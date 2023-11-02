
@protocol CSTimerViewControllerDelegate

@required

- (void)timerControllerDidStartTimer:(CSTimerViewController *)arg1;
- (void)timerControllerDidStopTimer:(CSTimerViewController *)arg1;
- (void)timerControllerDidUpdateTimer:(CSTimerViewController *)arg1;

@end
