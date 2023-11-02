
@interface NCNotificationListSectionRevealHintView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    bool  _forceRevealed;
    double  _hintingAlpha;
    _UILegibilitySettings * _legibilitySettings;
    SBUILegibilityLabel * _revealHintTitle;
    double  _revealPercentage;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForceRevealed, nonatomic) bool forceRevealed;
@property (readonly) unsigned long long hash;
@property (nonatomic) double hintingAlpha;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, retain) SBUILegibilityLabel *revealHintTitle;
@property (nonatomic) double revealPercentage;
@property (readonly) Class superclass;

+ (double)minimumViewHeight;

- (void).cxx_destruct;
- (double)_alphaValueBasedOnRevealPercentage;
- (void)_configureRevealHintTitleIfNecessary;
- (double)_hintTitleDisplacementForRevealPercentage:(double)arg1;
- (id)_labelFont;
- (void)_layoutRevealHintTitle;
- (void)_updateAlpha;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (double)hintingAlpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isForceRevealed;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)revealHintTitle;
- (double)revealPercentage;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setForceRevealed:(bool)arg1;
- (void)setHintingAlpha:(double)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setRevealHintTitle:(id)arg1;
- (void)setRevealPercentage:(double)arg1;

@end
