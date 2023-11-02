
@protocol IRProximityBridgeDelegateProtocol <NSObject>

@required

- (void)didBridgeFail:(NSString *)arg1;
- (void)didBridgeRunSuccesfully:(NSString *)arg1;
- (void)didBridgeSuspendEndedWithName:(NSString *)arg1;
- (void)didBridgeSuspendStartedWithName:(NSString *)arg1;
- (void)didInvalidateAllDevices:(NSString *)arg1;
- (void)didRemoveDevice:(IRNearbyDeviceDO *)arg1 withName:(NSString *)arg2;
- (void)didUpdateNearbyDevice:(IRNearbyDeviceDO *)arg1 withName:(NSString *)arg2;

@end
