
@protocol HMFTimerManagerDelegate <NSObject>

@required

- (void)timerManager:(id <HMFTimerManager>)arg1 didFireForTimerContext:(id <HMFTimerManagerTimerContext>)arg2;

@end
