
@interface _UISearchAtomBackgroundView : UIView {
    UIBlurEffect * _blurEffect;
    long long  _selectionStyle;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) UIBlurEffect *blurEffect;
@property (nonatomic) long long selectionStyle;

- (void).cxx_destruct;
- (void)_transitionFromBlurEffect:(id)arg1 toBlurEffect:(id)arg2;
- (void)_updateSelectionStyleMask;
- (id)blurEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)selectionStyle;
- (void)setBlurEffect:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;

@end
