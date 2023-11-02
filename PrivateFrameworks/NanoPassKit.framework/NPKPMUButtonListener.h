
@interface NPKPMUButtonListener : NPKButtonListener {
    struct __IOHIDEventSystemClient { } * _hidSystemClient;
}

@property (nonatomic) struct __IOHIDEventSystemClient { }*hidSystemClient;

- (void)_handleButtonEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_initializeHIDClient;
- (void)dealloc;
- (struct __IOHIDEventSystemClient { }*)hidSystemClient;
- (id)init;
- (void)setHidSystemClient:(struct __IOHIDEventSystemClient { }*)arg1;

@end
