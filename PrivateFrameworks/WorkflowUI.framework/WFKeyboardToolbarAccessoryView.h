
@interface WFKeyboardToolbarAccessoryView : UIInputView <UIInputViewAudioFeedback> {
    UIToolbar * _toolbar;
}

@property (nonatomic, copy) NSArray *barItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enableInputClicksWhenVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIToolbar *toolbar;

- (void).cxx_destruct;
- (void)appendBarItem:(id)arg1;
- (id)barItems;
- (id)borderedButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (double)borderedButtonWidthForButtonTitle:(id)arg1 font:(id)arg2;
- (id)buttonImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)drawRoundedRectangleInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 color:(id)arg3 radius:(double)arg4;
- (bool)enableInputClicksWhenVisible;
- (id)fixedSpaceItemOfWidth:(double)arg1;
- (id)flexibleSpaceItem;
- (id)init;
- (double)inverseToolbarPadding;
- (bool)isPhoneUI;
- (double)keyboardButtonHeight;
- (id)plainButtonItemWithTitle:(id)arg1 bolded:(bool)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)prependBarItem:(id)arg1;
- (void)removeAllBarItems;
- (void)setBarItems:(id)arg1;
- (id)toolbar;

@end
