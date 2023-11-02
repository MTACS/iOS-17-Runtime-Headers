
@protocol IRAVOutputDeviceProviderObserverProtocol <NSObject>

@required

- (void)provider:(IRAVOutputDeviceProvider *)arg1 didUpdateAVOutputDevices:(NSSet *)arg2;

@end
