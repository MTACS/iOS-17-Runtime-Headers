
@protocol BKHIDEventProcessor <NSObject>

@required

- (long long)processEvent:(inout struct __IOHIDEvent {}**)arg1 sender:(id <BKHIDEventSenderInfo>)arg2 dispatcher:(id <BKHIDEventDispatcher>)arg3;

@optional

- (void)didInitializeRegistryWithContext:(BKHIDEventProcessorCreationContext *)arg1;
- (id)initWithContext:(BKHIDEventProcessorCreationContext *)arg1;

@end
