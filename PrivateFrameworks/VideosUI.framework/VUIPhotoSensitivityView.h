
@interface VUIPhotoSensitivityView : UIView {
    VUITextLayout * _descriptionLayout;
    VUILabel * _descriptionView;
    UIView * _dividerView;
    VUIPhotoSensitivityViewLayout * _layout;
    VUIImageView * _logoImageView;
}

@property (nonatomic, readonly) VUITextLayout *descriptionLayout;
@property (nonatomic, retain) VUILabel *descriptionView;
@property (nonatomic, retain) UIView *dividerView;
@property (nonatomic, retain) VUIPhotoSensitivityViewLayout *layout;
@property (nonatomic, retain) VUIImageView *logoImageView;

- (void).cxx_destruct;
- (void)_configureSubviewsWithDictionary:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_descriptionMargin;
- (double)_descriptionViewYOffset;
- (double)_descriptionWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_dividerMargin;
- (struct CGSize { double x1; double x2; })_dividerSize;
- (void)_hideWithAnimationWithCompletion:(id /* block */)arg1;
- (bool)_isPortrait;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_logoMargin;
- (struct CGSize { double x1; double x2; })_logoSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_margin;
- (void)_showWithAnimationWithCompletion:(id /* block */)arg1;
- (id)descriptionLayout;
- (id)descriptionView;
- (id)dividerView;
- (void)hideAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithPhotoSensitivityInfoDictionary:(id)arg1;
- (id)layout;
- (void)layoutSubviews;
- (id)logoImageView;
- (void)setDescriptionView:(id)arg1;
- (void)setDividerView:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setLogoImageView:(id)arg1;
- (void)showAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
