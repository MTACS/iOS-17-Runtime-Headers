
@interface MX_HIDEventObserver : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _smartCoverClosed;
    struct __IOHIDEventSystemClient { } * mHIDClient;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) bool smartCoverClosed;

- (id)accessQueue;
- (void)dealloc;
- (void)handleButtonEvent:(struct __IOHIDEvent { }*)arg1;
- (void)handleEvent:(struct __IOHIDEvent { }*)arg1;
- (id)init;
- (void)setAccessQueue:(id)arg1;
- (void)setSmartCoverClosed:(bool)arg1;
- (bool)smartCoverClosed;

@end
