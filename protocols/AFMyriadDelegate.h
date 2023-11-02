
@protocol AFMyriadDelegate <NSObject>

@optional

- (void)advertisingDidBegin:(AFMyriadCoordinator *)arg1;
- (void)advertisingDidEnd:(AFMyriadCoordinator *)arg1;
- (void)advertisingWillBeginWithDelay:(float)arg1 advertisingInterval:(float)arg2;
- (void)listeningDidBegin:(AFMyriadCoordinator *)arg1;
- (void)listeningDidEnd:(AFMyriadCoordinator *)arg1;
- (void)myriadCoordinatorDidHandleEmergency:(AFMyriadCoordinator *)arg1;
- (void)myriadCoordinatorWillHandleEmergency:(AFMyriadCoordinator *)arg1;
- (void)shouldAbortAnotherDeviceBetter:(AFMyriadCoordinator *)arg1;
- (void)shouldContinue:(AFMyriadCoordinator *)arg1;
- (void)shouldHandleEmergency:(AFMyriadCoordinator *)arg1;
- (void)shouldUnduck:(AFMyriadCoordinator *)arg1;
- (void)willEndSession:(AFMyriadSession *)arg1;
- (void)willStartWithSession:(AFMyriadSession *)arg1;

@end
