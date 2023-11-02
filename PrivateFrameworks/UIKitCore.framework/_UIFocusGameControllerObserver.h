
@interface _UIFocusGameControllerObserver : _UIFocusStateObserver {
    struct __IOHIDManager { } * _hidManager;
}

- (void)_registerObserver;
- (void)_unregisterObserver;
- (void)dealloc;
- (id)init;
- (bool)isActive;

@end
