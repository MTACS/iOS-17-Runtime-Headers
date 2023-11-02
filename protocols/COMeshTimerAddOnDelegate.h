
@protocol COMeshTimerAddOnDelegate <NSObject>

@optional

- (void)didChangeCompositionForTimerAddOn:(COMeshTimerAddOn *)arg1;
- (void)didResetTimerAddOn:(COMeshTimerAddOn *)arg1;
- (void)timerAddOn:(COMeshTimerAddOn *)arg1 didAddTimers:(NSArray *)arg2;
- (void)timerAddOn:(COMeshTimerAddOn *)arg1 didChangeTimers:(NSArray *)arg2;
- (void)timerAddOn:(COMeshTimerAddOn *)arg1 didDismissTimers:(NSArray *)arg2;
- (void)timerAddOn:(COMeshTimerAddOn *)arg1 didFireTimers:(NSArray *)arg2;
- (void)timerAddOn:(COMeshTimerAddOn *)arg1 didRemoveTimers:(NSArray *)arg2;
- (void)timerAddOn:(COMeshTimerAddOn *)arg1 didUpdateTimers:(NSArray *)arg2;

@end
