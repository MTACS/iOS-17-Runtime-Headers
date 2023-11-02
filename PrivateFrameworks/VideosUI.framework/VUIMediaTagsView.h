
@interface VUIMediaTagsView : VUIBaseView <VUILabelBaselineProtocol, VUIRentalExpirationLabelDelegate> {
    UIImage * _commonSenseDarkImage;
    UIImage * _commonSenseLightImage;
    NSArray * _groupedSubviews;
    bool  _isSelected;
    VUIMediaTagsViewLayout * _tagsViewLayout;
    double  _totalSubviewsWidth;
    NSDictionary * _viewsMap;
}

@property (nonatomic, retain) UIImage *commonSenseDarkImage;
@property (nonatomic, retain) UIImage *commonSenseLightImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *groupedSubviews;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSelected;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VUIMediaTagsViewLayout *tagsViewLayout;
@property (nonatomic) double totalSubviewsWidth;
@property (nonatomic, copy) NSDictionary *viewsMap;
@property (nonatomic, readonly) double vuiBaselineHeight;

+ (id)tagsViewWithMetadata:(id)arg1 layout:(id)arg2 existingView:(id)arg3;

- (void).cxx_destruct;
- (void)_addGenreLabelAndSeparator;
- (void)_adjustViewsPositionFor:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_firstLabelSubview;
- (struct CGSize { double x1; double x2; })_layoutSubviewsForSize:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (id)_newImageViewAsSubview:(bool)arg1;
- (id)_newLabelAsSubview:(id)arg1;
- (id)_newLabelAsSubview:(id)arg1 withAttributedString:(id)arg2;
- (id)_newRentalExpirationlabel:(id)arg1 exisitingLabel:(id)arg2;
- (id)_newTextBadgeViewAsSubview:(id)arg1 layout:(id)arg2 withString:(id)arg3;
- (void)_removeGenreLabelAndSeparator;
- (void)_removeSeparatorsFromGroupsIfNeeded:(bool)arg1;
- (bool)_shouldApplyTintColor:(id)arg1 forImage:(id)arg2;
- (bool)_shouldPutTextOnSeparateLines;
- (double)_totalSubviewsWidth;
- (void)_updateAppearanceWithUserInterfaceStyle:(unsigned long long)arg1;
- (void)_updateImageAppearanceWithUserInterfaceStyle:(unsigned long long)arg1;
- (double)bottomMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (id)commonSenseDarkImage;
- (id)commonSenseLightImage;
- (void)contrastSettingsDidChange;
- (void)dealloc;
- (double)firstBaselineOffsetFromTop;
- (id)groupedSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layout:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isSelected;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (void)setCommonSenseDarkImage:(id)arg1;
- (void)setCommonSenseLightImage:(id)arg1;
- (void)setGroupedSubviews:(id)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setTotalSubviewsWidth:(double)arg1;
- (void)setViewsMap:(id)arg1;
- (id)tagsViewLayout;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (double)totalSubviewsWidth;
- (void)transparencySettingsDidChange;
- (void)updateWithMetadata:(id)arg1;
- (id)viewsMap;
- (double)vui_baselineOffsetFromBottom;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;

@end
