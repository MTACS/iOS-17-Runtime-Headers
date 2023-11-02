
@protocol RMConnectionLifecycleDelegate <NSObject>

@required

- (void)endpointWasInterrupted:(RMConnectionEndpoint *)arg1;
- (void)endpointWasInvalidated:(RMConnectionEndpoint *)arg1;

@end
