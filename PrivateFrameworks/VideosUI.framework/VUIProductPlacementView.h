
@interface VUIProductPlacementView : UIView {
    VUILabel * _blockDescriptionLabel;
    UIView * _dividerView;
    VUIVideoAdvisoryViewLayout * _layout;
    _TVImageView * _logoImageView;
}

@property (nonatomic, retain) VUILabel *blockDescriptionLabel;
@property (nonatomic, retain) UIView *dividerView;
@property (nonatomic, retain) VUIVideoAdvisoryViewLayout *layout;
@property (nonatomic, retain) _TVImageView *logoImageView;

- (void).cxx_destruct;
- (void)_configureSubviewsWithDictionary:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_descriptionMargin;
- (struct CGSize { double x1; double x2; })_descriptionSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_dividerMargin;
- (struct CGSize { double x1; double x2; })_dividerSize;
- (void)_hideAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_hideWithAnimationWithCompletion:(id /* block */)arg1;
- (bool)_isPortrait;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_logoMargin;
- (struct CGSize { double x1; double x2; })_logoSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_margin;
- (void)_showAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_showWithAnimationWithCompletion:(id /* block */)arg1;
- (id)blockDescriptionLabel;
- (id)dividerView;
- (id)initWithAdvisoryInfoDictionary:(id)arg1;
- (id)layout;
- (void)layoutSubviews;
- (id)logoImageView;
- (void)setBlockDescriptionLabel:(id)arg1;
- (void)setDividerView:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setLogoImageView:(id)arg1;
- (void)show:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
