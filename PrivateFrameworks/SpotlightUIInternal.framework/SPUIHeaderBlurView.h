
@interface SPUIHeaderBlurView : UIVisualEffectView {
    UIColor * _baseTintColor;
    bool  _keyboardIsUp;
    bool  _useInPlaceFilteredBlur;
}

@property (retain) UIColor *baseTintColor;
@property (nonatomic) bool keyboardIsUp;
@property (nonatomic) bool useInPlaceFilteredBlur;

- (void).cxx_destruct;
- (id)baseTintColor;
- (id)init;
- (bool)keyboardIsUp;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)setBaseTintColor:(id)arg1;
- (void)setKeyboardIsUp:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUseInPlaceFilteredBlur:(bool)arg1;
- (void)updateEffect;
- (bool)useInPlaceFilteredBlur;

@end
