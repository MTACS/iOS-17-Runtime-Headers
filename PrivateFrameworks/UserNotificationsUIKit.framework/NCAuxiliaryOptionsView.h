
@interface NCAuxiliaryOptionsView : UIView <NCAuxiliaryOptionsSupporting, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSArray * _auxiliaryOptionActions;
    NSArray * _auxiliaryOptionButtons;
    UIColor * _auxiliaryOptionsTextColor;
    bool  _auxiliaryOptionsVisible;
    unsigned long long  _cachedSummaryLabelNumberOfLines;
    NSStringDrawingContext * _drawingContext;
    BSUIFontProvider * _fontProvider;
    NSString * _materialGroupNameBase;
    long long  _materialRecipe;
    UIColor * _materialTintColor;
    UILabel * _optionsSummaryLabel;
    UIView * _overlayView;
    double  _widthForCachedLayoutInfo;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, retain) NSArray *auxiliaryOptionActions;
@property (nonatomic, readonly) NSArray *auxiliaryOptionButtons;
@property (nonatomic, copy) NSString *auxiliaryOptionsSummaryText;
@property (nonatomic, copy) UIColor *auxiliaryOptionsTextColor;
@property (nonatomic) bool auxiliaryOptionsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BSUIFontProvider *fontProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic) long long materialRecipe;
@property (nonatomic, copy) UIColor *materialTintColor;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_calculateOptionsSummaryLabelLayoutInfoForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_configureAuxiliaryOptionsSummaryTextLabelIfNecessary;
- (void)_configureOverlayIfNecessary;
- (void)_configureOverlayView;
- (id)_defaultTextColor;
- (void)_layoutOptionsButtons;
- (void)_layoutOptionsSummaryLabel;
- (id)_newOptionsButton;
- (double)_optionsButtonWidthForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 auxiliaryOptionButtonsCount:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_optionsSummaryMeasuringFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_optionsSummaryWidthForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_preferredFontForAuxiliaryOptionsSummaryTextLabel;
- (id)_preferredFontForOptionButton;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setDefaultAttributes;
- (unsigned long long)_summaryLabelNumberOfLinesForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateTextAttributesForOptionsSummaryLabel;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)auxiliaryOptionActions;
- (id)auxiliaryOptionButtons;
- (id)auxiliaryOptionsSummaryText;
- (id)auxiliaryOptionsTextColor;
- (bool)auxiliaryOptionsVisible;
- (id)fontProvider;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)materialGroupNameBase;
- (long long)materialRecipe;
- (id)materialTintColor;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAuxiliaryOptionActions:(id)arg1;
- (void)setAuxiliaryOptionsSummaryText:(id)arg1;
- (void)setAuxiliaryOptionsTextColor:(id)arg1;
- (void)setAuxiliaryOptionsVisible:(bool)arg1;
- (void)setFontProvider:(id)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setMaterialRecipe:(long long)arg1;
- (void)setMaterialTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
