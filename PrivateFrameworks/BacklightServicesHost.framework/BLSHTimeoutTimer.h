
@interface BLSHTimeoutTimer : BLSHAssertionAttributeTimer

- (bool)reactivateIfPossible;
- (void)restartTimer;
- (void)timerFired;

@end
