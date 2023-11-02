
@protocol SVXAlarmAndTimerFiringContextMutating <NSObject>

@required

- (void)setHasOtherRunningTimers:(bool)arg1;
- (void)setOrderedFiringAlarms:(NSOrderedSet *)arg1;
- (void)setOrderedFiringTimers:(NSOrderedSet *)arg1;

@end
