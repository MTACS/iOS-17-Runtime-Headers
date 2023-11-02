
@protocol HAP2AccessoryServerCoordinatorPrivate <HAP2AccessoryServerCoordinator>

@required

- (void)resurfaceDiscoveryInfoForDeviceID:(HAPDeviceID *)arg1;
- (void)setBrowser:(id <HAP2AccessoryServerBrowserPrivate>)arg1 operationQueue:(HAP2SerializedOperationQueue *)arg2;

@end
