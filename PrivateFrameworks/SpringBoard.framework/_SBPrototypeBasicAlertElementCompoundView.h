
@interface _SBPrototypeBasicAlertElementCompoundView : UIView {
    unsigned long long  _layoutAxis;
    UIImageView * _leadingImageView;
    UIImageView * _trailingImageView;
}

@property (nonatomic) unsigned long long layoutAxis;
@property (nonatomic, copy) UIImage *leadingImage;
@property (nonatomic, copy) UIImage *trailingImage;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)layoutAxis;
- (void)layoutSubviews;
- (id)leadingImage;
- (void)setLayoutAxis:(unsigned long long)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)setTrailingImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)trailingImage;

@end
