
@protocol CLNotifierServiceProtocol <CLIntersiloServiceProtocol>

@required

- (void)forget:(byref <CLNotifierServiceClientProtocol> *)arg1;
- (void)register:(byref <CLNotifierServiceClientProtocol> *)arg1 forNotification:(int)arg2 registrationInfo:(CLCppContainer *)arg3;
- (void)unregister:(byref <CLNotifierServiceClientProtocol> *)arg1 forNotification:(int)arg2;

@end
