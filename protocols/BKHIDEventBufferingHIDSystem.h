
@protocol BKHIDEventBufferingHIDSystem <NSObject>

@required

- (void)buffer:(BKHIDEventBuffer *)arg1 drainEvent:(struct __IOHIDEvent { }*)arg2 withContext:(id)arg3 sender:(id <BKHIDEventSenderInfo>)arg4 sequence:(BKHIDEventDeliverySequence *)arg5 toResolution:(BKSHIDEventDeferringResolution *)arg6;
- (void)bufferDidFinishDraining:(BKHIDEventBuffer *)arg1;
- (void)bufferWillBeginDraining:(BKHIDEventBuffer *)arg1;
- (void)bufferingDidAddNewBuffers:(NSDictionary *)arg1;
- (void)requestBufferReevaluationWithContext:(BKHIDEventReevaluateBufferingContext *)arg1;

@end
