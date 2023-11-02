
@protocol BLSHBacklightInactiveEnvironmentSessionObserving <NSObject>

@required

- (void)didEndInactiveEnvironmentSession:(BLSHBacklightInactiveEnvironmentSession *)arg1;
- (void)inactiveEnvironmentSession:(BLSHBacklightInactiveEnvironmentSession *)arg1 didUpdateToPresentation:(BLSHBacklightEnvironmentPresentation *)arg2;

@optional

- (void)inactiveEnvironmentSession:(BLSHBacklightInactiveEnvironmentSession *)arg1 didBeginUpdateToBacklightState:(long long)arg2;

@end
