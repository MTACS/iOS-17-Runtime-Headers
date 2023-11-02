
@protocol BKHIDBufferedEventProcessor <NSObject>

@required

- (void)bufferDidEndDraining:(BKHIDEventBuffer *)arg1;
- (void)bufferWillBeginDraining:(BKHIDEventBuffer *)arg1;
- (void)bufferingDidAddNewBuffers:(NSDictionary *)arg1;
- (void)conformsToBKHIDBufferedEventProcessor;
- (void)postEvent:(struct __IOHIDEvent { }*)arg1 withContext:(id)arg2 toResolution:(BKSHIDEventDeferringResolution *)arg3 fromSequence:(BKHIDEventDeliverySequence *)arg4;
- (long long)processEvent:(inout struct __IOHIDEvent {}**)arg1 withContext:(id)arg2 buffer:(BKHIDEventBuffer *)arg3 sequence:(BKHIDEventDeliverySequence *)arg4 sender:(id <BKHIDEventSenderInfo>)arg5 dispatcher:(id <BKHIDEventDispatcher>)arg6 resolution:(BKSHIDEventDeferringResolution *)arg7;

@end
