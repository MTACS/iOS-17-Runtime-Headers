
@protocol PKForegroundActiveArbiter <NSObject>

@required

- (struct { bool x1; bool x2; })registerObserver:(id <PKForegroundActiveArbiterObserver>)arg1;
- (void)unregisterObserver:(id <PKForegroundActiveArbiterObserver>)arg1;

@end
