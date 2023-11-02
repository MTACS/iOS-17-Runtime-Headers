
@interface EmojiPoster.NoKeyboardTextField : UITextField

@property (nonatomic, readonly) bool supportsImagePaste;

- (bool)_disableAutomaticKeyboardBehavior;
- (bool)_disableAutomaticKeyboardUI;
- (void)buildMenuWithBuilder:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)supportsImagePaste;

@end
