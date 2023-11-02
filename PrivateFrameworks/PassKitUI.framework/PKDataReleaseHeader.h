
@interface PKDataReleaseHeader : UIView {
    <PKDataReleaseHeaderDelegate> * _delegate;
    UIButton * _dismissButton;
    UIVisualEffectView * _headerMaterial;
    UILabel * _label;
    UIImageView * _logo;
    UIView * _separator;
}

@property (nonatomic) double backgroundViewAlpha;

- (void).cxx_destruct;
- (void)_dismiss;
- (double)backgroundViewAlpha;
- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundViewAlpha:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
