
@protocol MTRDeviceDelegate <NSObject>

@required

- (void)device:(MTRDevice *)arg1 receivedAttributeReport:(NSArray *)arg2;
- (void)device:(MTRDevice *)arg1 receivedEventReport:(NSArray *)arg2;
- (void)device:(MTRDevice *)arg1 stateChanged:(unsigned long long)arg2;

@optional

- (void)deviceBecameActive:(MTRDevice *)arg1;

@end
