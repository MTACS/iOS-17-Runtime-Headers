
@interface VTRemoteDarwinHIDEventNotifier : NSObject {
    struct __IOHIDManager { } * _hidManager;
}

@property (nonatomic) struct __IOHIDManager { }*hidManager;

- (void)_registerHIDEventNotification;
- (struct __IOHIDManager { }*)hidManager;
- (id)init;
- (void)setHidManager:(struct __IOHIDManager { }*)arg1;
- (void)startObserving;

@end
