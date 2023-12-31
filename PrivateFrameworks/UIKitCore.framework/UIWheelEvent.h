
@interface UIWheelEvent : UIEvent {
    long long  _recentScrollDistance;
    NSMutableArray * _recentScrollEvents;
    long long  lastSubtype;
}

- (void).cxx_destruct;
- (bool)_canHaveVelocity;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (double)_wheelVelocity;
- (long long)subtype;
- (long long)type;

@end
