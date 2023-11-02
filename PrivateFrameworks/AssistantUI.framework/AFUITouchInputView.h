
@interface AFUITouchInputView : UIView {
    <AFUITouchInputViewDelegate> * _delegate;
}

@property (nonatomic) <AFUITouchInputViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
