
@protocol NRDevicePropertyObserver <NSObject>

@required

- (void)device:(NRDevice *)arg1 propertyDidChange:(NSString *)arg2 fromValue:(id)arg3;

@end
