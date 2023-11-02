
@interface SFAutomaticPasswordInputView : UIInputView {
    <SFAutomaticPasswordInputViewDelegate> * _delegate;
    SFAutomaticPasswordExplanationView * _explanationView;
    <SFAutomaticPasswordInputViewSizing> * _inputViewSizing;
    long long  _keyboardType;
    bool  _shouldAllowSelfSizing;
}

@property (nonatomic) <SFAutomaticPasswordInputViewDelegate> *delegate;
@property (nonatomic) <SFAutomaticPasswordInputViewSizing> *inputViewSizing;
@property (nonatomic, readonly) long long keyboardType;
@property (nonatomic) bool shouldAllowSelfSizing;

- (void).cxx_destruct;
- (void)_useStrongPasswordButtonAction:(id)arg1;
- (bool)allowsSelfSizing;
- (id)delegate;
- (id)initWithInputViewStyle:(long long)arg1 keyboardType:(long long)arg2;
- (id)inputViewSizing;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (void)setDelegate:(id)arg1;
- (void)setInputViewSizing:(id)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setShouldAllowSelfSizing:(bool)arg1;
- (bool)shouldAllowSelfSizing;

@end
