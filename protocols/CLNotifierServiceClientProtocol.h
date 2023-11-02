
@protocol CLNotifierServiceClientProtocol <CLIntersiloClientProtocol>

@required

- (void)onNotification:(int)arg1 withData:(CLCppContainer *)arg2;

@end
