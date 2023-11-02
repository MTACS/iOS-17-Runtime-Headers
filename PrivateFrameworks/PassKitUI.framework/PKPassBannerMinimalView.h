
@interface PKPassBannerMinimalView : UIView <SBUISystemApertureAccessoryView> {
    <PKPassBannerMinimalViewDelegate> * _delegate;
    double  _interitemPadding;
    PKPassBannerLeadingView * _leadingView;
    long long  _style;
    PKPassBannerTrailingView * _trailingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithStyle:(long long)arg1 leadingView:(id)arg2 trailingView:(id)arg3;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 commit:(bool)arg2;
- (void)_setInteritemPadding:(double)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
