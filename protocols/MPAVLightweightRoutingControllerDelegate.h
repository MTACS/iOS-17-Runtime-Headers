
@protocol MPAVLightweightRoutingControllerDelegate <NSObject>

@optional

- (void)lightweightRoutingController:(MPAVLightweightRoutingController *)arg1 didChangeDevicePresenceDetected:(bool)arg2;
- (void)lightweightRoutingController:(MPAVLightweightRoutingController *)arg1 didChangePickedRoutes:(NSArray *)arg2;

@end
