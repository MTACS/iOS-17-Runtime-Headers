
@interface PKPaletteTextOptionsView : UIView {
    UIButton * _signatureButton;
    UIButton * _textButton;
}

@property (nonatomic, readonly) UIButton *signatureButton;
@property (nonatomic, readonly) UIButton *textButton;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)signatureButton;
- (id)textButton;

@end
