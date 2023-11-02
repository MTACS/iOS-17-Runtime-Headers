
@protocol CSIdleTimerControlling <NSObject>

@required

- (void)addIdleTimerDisabledAssertionReason:(NSString *)arg1;
- (void)removeIdleTimerDisabledAssertionReason:(NSString *)arg1;
- (void)resetIdleTimerIfTopMost;

@end
