
@interface _UIFocusLinearMovementDebugGestureRecognizer : UIGestureRecognizer {
    bool  _allowsGroupMode;
    bool  _groupMode;
    UIPress * _press;
    NSMutableSet * _presses;
}

@property (getter=isGroupMode, nonatomic) bool groupMode;

- (void).cxx_destruct;
- (void)_update;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 allowsGroupMode:(bool)arg3;
- (bool)isGroupMode;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setGroupMode:(bool)arg1;

@end
