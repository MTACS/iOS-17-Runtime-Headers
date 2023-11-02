
@interface VUIVideoAdvisoryView : UIView {
    UIView * _dividerView;
    VUIVideoAdvisoryViewLayout * _layout;
    NSArray * _legendViews;
    VUIImageView * _logoImageView;
    NSDictionary * _photoSensitivityDictionary;
    UIImage * _photoSensitivityImage;
    NSTimer * _photoSensitivityTimer;
    VUIPhotoSensitivityView * _photoSensitivityView;
}

@property (nonatomic, retain) UIView *dividerView;
@property (nonatomic, retain) VUIVideoAdvisoryViewLayout *layout;
@property (nonatomic, copy) NSArray *legendViews;
@property (nonatomic, retain) VUIImageView *logoImageView;
@property (nonatomic, retain) NSDictionary *photoSensitivityDictionary;
@property (nonatomic, retain) UIImage *photoSensitivityImage;
@property (nonatomic, retain) NSTimer *photoSensitivityTimer;
@property (nonatomic, retain) VUIPhotoSensitivityView *photoSensitivityView;

- (void).cxx_destruct;
- (void)_configureSubviewsWithDictionary:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_dividerMargin;
- (struct CGSize { double x1; double x2; })_dividerSize;
- (void)_hidePhotoSensitivityImage:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_hideWithCoreAnimationWithCompletion:(id /* block */)arg1;
- (bool)_isPortrait;
- (struct CGSize { double x1; double x2; })_legendSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_legendsMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_logoMargin;
- (struct CGSize { double x1; double x2; })_logoSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_margin;
- (void)_showPhotoSensitivityImage:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_showWithAnimationWithCompletion:(id /* block */)arg1;
- (void)_showWithCoreAnimationWithCompletion:(id /* block */)arg1;
- (id)dividerView;
- (void)hideAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithAdvisoryInfoDictionary:(id)arg1;
- (id)layout;
- (void)layoutSubviews;
- (id)legendViews;
- (id)logoImageView;
- (id)photoSensitivityDictionary;
- (id)photoSensitivityImage;
- (id)photoSensitivityTimer;
- (id)photoSensitivityView;
- (void)setDividerView:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setLegendViews:(id)arg1;
- (void)setLogoImageView:(id)arg1;
- (void)setPhotoSensitivityDictionary:(id)arg1;
- (void)setPhotoSensitivityImage:(id)arg1;
- (void)setPhotoSensitivityTimer:(id)arg1;
- (void)setPhotoSensitivityView:(id)arg1;
- (void)showAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
