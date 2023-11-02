
@interface _UINavigationBarModernPromptView : UIView <_UINavigationBarLayoutParticipating> {
    NSString * _prompt;
    UILabel * _promptLabel;
    UIColor * _textColor;
}

@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, copy) UIColor *textColor;

- (void).cxx_destruct;
- (void)_updatePromptLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)prompt;
- (void)setPrompt:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (void)updateLayoutData:(id)arg1 layoutWidth:(double)arg2;

@end
