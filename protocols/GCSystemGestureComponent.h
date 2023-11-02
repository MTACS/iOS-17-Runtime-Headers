
@protocol GCSystemGestureComponent <GCControllerComponent>

@required

- (void)disableSystemGestureForInput:(NSString *)arg1;
- (void)enableSystemGestureForInput:(NSString *)arg1;
- (bool)isSystemGestureObserver;
- (GCSystemGesturesState *)systemGesturesState;

@end
