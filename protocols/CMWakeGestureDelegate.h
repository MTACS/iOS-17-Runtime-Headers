
@protocol CMWakeGestureDelegate <NSObject>

@optional

- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2;
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2 detectedAt:(unsigned long long)arg3;
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3;
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3 detectedAt:(unsigned long long)arg4;
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2 type:(long long)arg3 detectedAt:(unsigned long long)arg4;
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGestureEvent:(CMWakeGestureEvent *)arg2;

@end
