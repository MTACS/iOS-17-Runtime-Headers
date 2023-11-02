
@interface BKHIDBiometricEventProcessor : NSObject <BKHIDEventProcessor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)processEvent:(inout struct __IOHIDEvent {}**)arg1 sender:(id)arg2 dispatcher:(id)arg3;

@end
