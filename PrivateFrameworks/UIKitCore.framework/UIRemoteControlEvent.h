
@interface UIRemoteControlEvent : UIEvent {
    long long  _subtype;
}

- (id)_init;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setSubtype:(long long)arg1;
- (void)_simpleRemoteActionNotification:(id)arg1;
- (id)_windows;
- (void)dealloc;
- (long long)subtype;
- (long long)type;

@end
