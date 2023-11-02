
@interface DBIconView : SBIconView {
    DBIconDropShadowProvider * _dropShadowProvider;
    UIView * _dropShadowView;
    DBIconLabelBackdropView * _labelLegibilityView;
    bool  _shadowHidden;
}

@property (nonatomic, retain) DBIconDropShadowProvider *dropShadowProvider;
@property (nonatomic, retain) UIView *dropShadowView;
@property (nonatomic, retain) DBIconLabelBackdropView *labelLegibilityView;
@property (nonatomic) bool shadowHidden;

+ (bool)_iconLabelsRequireBackground;
+ (double)_labelHeight;
+ (void)_updateCharacteristicsWithTraitCollection:(id)arg1;
+ (bool)allowsLabelAccessoryView;
+ (id)defaultIconLocation;
+ (id)environmentConfiguration;
+ (id)focusColorForTraitCollection:(id)arg1;
+ (id)focusTextColorForTraitCollection:(id)arg1;
+ (id)labelFontForTraitCollection:(id)arg1;
+ (struct CGSize { double x1; double x2; })maxLabelSizeForIconImageSize:(struct CGSize { double x1; double x2; })arg1;
+ (double)maximumIconViewHeightForIconImageSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumInterIconSpacing;
+ (void)setEnvironmentConfiguration:(id)arg1;
+ (bool)supportsCursorInteraction;
+ (bool)supportsDragInteraction;
+ (bool)supportsPreviewInteraction;
+ (id)textColorForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_configureIconImageView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForLabelHighlight;
- (double)_labelBaselineOffsetFromImage;
- (void)_refreshDropShadowWithIconImage:(id)arg1;
- (void)_updateLabel;
- (void)_wallpaperChanged:(id)arg1;
- (bool)canBecomeFocused;
- (void)configureLabelImageParametersBuilder:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)dropShadowProvider;
- (id)dropShadowView;
- (id)initWithConfigurationOptions:(unsigned long long)arg1 listLayoutProvider:(id)arg2;
- (id)labelFont;
- (id)labelLegibilityView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDropShadowProvider:(id)arg1;
- (void)setDropShadowView:(id)arg1;
- (void)setLabelHidden:(bool)arg1;
- (void)setLabelLegibilityView:(id)arg1;
- (void)setShadowHidden:(bool)arg1;
- (bool)shadowHidden;
- (void)traitCollectionDidChange:(id)arg1;

@end
