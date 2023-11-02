
@interface AKTextView : UITextView {
    <AKTextViewKeyCommandDelegate> * _keyCommandDelegate;
    long long  _maximumNumberOfCharacters;
}

@property <AKTextViewKeyCommandDelegate> *keyCommandDelegate;
@property long long maximumNumberOfCharacters;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)handleBackTabCommand:(id)arg1;
- (void)handleTabCommand:(id)arg1;
- (bool)isBlockedAction:(SEL)arg1;
- (id)keyCommandDelegate;
- (id)keyCommands;
- (long long)maximumNumberOfCharacters;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)setKeyCommandDelegate:(id)arg1;
- (void)setMaximumNumberOfCharacters:(long long)arg1;
- (id)textInputTraits;

@end
