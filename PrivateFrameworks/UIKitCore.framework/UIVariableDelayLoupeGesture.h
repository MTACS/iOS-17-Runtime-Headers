
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {
    UIResponder<UITextInput> * _textView;
}

@property (nonatomic, readonly) bool isLongPress;
@property UIResponder<UITextInput> *textView;

- (void).cxx_destruct;
- (bool)_allowsForShortDelay;
- (bool)_isGestureType:(long long)arg1;
- (void)_startEnoughTimeElapsedTimer;
- (bool)_tracksPointerTouch;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;
- (bool)isCloseToCaret;
- (bool)isLongPress;
- (bool)isWithinRecentTap;
- (void)setTextView:(id)arg1;
- (bool)shouldUseLegacyBehavior;
- (id)textView;

@end
