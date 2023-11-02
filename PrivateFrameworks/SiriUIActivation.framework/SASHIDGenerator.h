
@interface SASHIDGenerator : NSObject {
    NSObject<OS_dispatch_queue> * _generatorQueue;
    struct __IOHIDEventSystemClient { } * _ioSystemClient;
}

- (void).cxx_destruct;
- (void)_sendHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_sendHIDHoldHomeButton;
- (void)_sendHIDHoldLockButton;
- (void)dealloc;
- (id)init;
- (void)sendHoldHomeButtonHIDEvents;
- (void)sendHoldLockButtonHIDEvents;

@end
