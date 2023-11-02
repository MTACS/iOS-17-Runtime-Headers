
@interface TUIEmojiSearchTextFieldBackgroundView : UIView {
    unsigned long long  _backgroundStyle;
}

@property (nonatomic) unsigned long long backgroundStyle;

- (void)_setRenderConfig:(id)arg1;
- (unsigned long long)backgroundStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setBackgroundStyle:(unsigned long long)arg1 animated:(bool)arg2;

@end
