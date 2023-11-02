
@protocol _GCGenericDeviceDBService <NSObject>

@required

- (GCFuture *)hasModelForDevice:(GCHIDDeviceSnapshot *)arg1;
- (GCFuture *)preparedModelForDevice:(GCHIDDeviceSnapshot *)arg1;

@end
