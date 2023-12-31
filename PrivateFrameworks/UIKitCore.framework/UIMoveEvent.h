
@interface UIMoveEvent : UIEvent {
    unsigned long long  _focusHeading;
    long long  _moveDirection;
}

@property (setter=_setFocusHeading:, nonatomic) unsigned long long _focusHeading;
@property (setter=_setMoveDirection:, nonatomic) long long _moveDirection;

- (unsigned long long)_focusHeading;
- (long long)_moveDirection;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setFocusHeading:(unsigned long long)arg1;
- (void)_setMoveDirection:(long long)arg1;
- (long long)type;

@end
