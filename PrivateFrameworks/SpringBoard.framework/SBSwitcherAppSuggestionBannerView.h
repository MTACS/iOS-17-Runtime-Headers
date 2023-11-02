
@interface SBSwitcherAppSuggestionBannerView : PLPlatterView {
    UILabel * _appLabel;
    UILabel * _descriptionLabel;
    UIView * _highlightDarkeningView;
    bool  _highlighted;
    UIImageView * _iconView;
    unsigned long long  _style;
    SBBestAppSuggestion * _suggestion;
}

@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) SBBestAppSuggestion *representedAppSuggestion;
@property (nonatomic, readonly) unsigned long long style;

- (void).cxx_destruct;
- (id)_appTitleForSuggestion:(id)arg1;
- (id)_borderView;
- (void)_configureConstraints;
- (void)_createAppLabelForSuggestion:(id)arg1;
- (void)_createDarkeningView;
- (void)_createDescriptionLabelForSuggestion:(id)arg1;
- (void)_createIconViewForSuggestion:(id)arg1;
- (id)_descriptionFont;
- (id)_descriptionStringForSuggestion:(id)arg1;
- (id)_firstWakeGreetingString;
- (id)_iconImageFromAppWithBundleIdentifier:(id)arg1 withIconImageCache:(id)arg2;
- (bool)_isSingleLine;
- (id)_meCardShortName;
- (id)_textStyle;
- (id)_titleFont;
- (void)_updateAppearanceForCurrentUserInterfaceStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 appSuggestion:(id)arg2 style:(unsigned long long)arg3;
- (id)initWithRecipe:(long long)arg1;
- (bool)isHighlighted;
- (id)representedAppSuggestion;
- (void)setHighlighted:(bool)arg1;
- (unsigned long long)style;
- (void)traitCollectionDidChange:(id)arg1;

@end
