
@interface NCNotificationListHeaderTitleView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    BSUIFontProvider * _fontProvider;
    _UILegibilitySettings * _legibilitySettings;
    NSString * _preferredContentSizeCategory;
    bool  _primary;
    NSString * _title;
    SBUILegibilityLabel * _titleLabel;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_fontProvider, setter=_setFontProvider:, nonatomic, retain) BSUIFontProvider *fontProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (getter=isPrimary, nonatomic) bool primary;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) SBUILegibilityLabel *titleLabel;

- (void).cxx_destruct;
- (void)_configureTitleLabelIfNecessary;
- (id)_fontProvider;
- (void)_invalidateTitleLabel;
- (id)_labelFont;
- (void)_layoutTitleLabel;
- (void)_setFontProvider:(id)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (bool)isPrimary;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
