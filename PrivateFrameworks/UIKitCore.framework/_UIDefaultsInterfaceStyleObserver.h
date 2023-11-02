
@interface _UIDefaultsInterfaceStyleObserver : NSObject {
    NSString * _notificationName;
    int  _notifyToken;
}

- (void).cxx_destruct;
- (void)_didChange;
- (void)dealloc;
- (id)initWithNotificationName:(id)arg1 darwinNotification:(const char *)arg2;
- (void)observeUserDefaults:(id)arg1 key:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
