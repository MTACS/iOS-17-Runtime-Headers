
@interface NCNotificationListCoalescingControlsView : UIView <MTMaterialGrouping, NCToggleControlDelegate, PLContentSizeCategoryAdjusting> {
    NSString * _clearAllText;
    <NCNotificationListCoalescingControlsViewDelegate> * _delegate;
    double  _effectiveButtonHeight;
    double  _effectiveHorizontalPadding;
    double  _effectiveVerticalPadding;
    bool  _footerCell;
    _UILegibilitySettings * _legibilitySettings;
    NSString * _materialGroupNameBase;
    NCToggleControlPair * _toggleControlPair;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, retain) NSString *clearAllText;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListCoalescingControlsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_effectiveButtonHeight, nonatomic) double effectiveButtonHeight;
@property (getter=_effectiveHorizontalPadding, nonatomic) double effectiveHorizontalPadding;
@property (getter=_effectiveVerticalPadding, nonatomic) double effectiveVerticalPadding;
@property (getter=isFooterCell, nonatomic) bool footerCell;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (nonatomic, retain) NCToggleControlPair *toggleControlPair;

+ (id)labelTextStyle;
+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)_clearButton;
- (id)_clearButtonTitle;
- (void)_configureToggleControlPairIfNecessary;
- (double)_cornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsets;
- (double)_effectiveButtonHeight;
- (double)_effectiveHorizontalPadding;
- (double)_effectiveValue:(double)arg1;
- (double)_effectiveVerticalPadding;
- (void)_handleClearAll:(id)arg1;
- (void)_handleClearPrimaryAction:(id)arg1;
- (void)_handleClearTouchUpInside:(id)arg1;
- (void)_handleRestackPrimaryAction:(id)arg1;
- (void)_handleRestackTouchUpInside:(id)arg1;
- (double)_imageDimension;
- (bool)_isClearButtonExpanded;
- (void)_layoutToggleControlPair;
- (id)_newClearButton;
- (id)_newRestackButton;
- (id)_restackButtonTitle;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)clearAllText;
- (id)containerViewForToggleControlClickInteractionPresentedContent:(id)arg1;
- (id)delegate;
- (bool)dismissModalFullScreenIfNeeded;
- (bool)isFooterCell;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)materialGroupNameBase;
- (void)resetClearButtonStateAnimated:(bool)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setClearAllText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectiveButtonHeight:(double)arg1;
- (void)setEffectiveHorizontalPadding:(double)arg1;
- (void)setEffectiveVerticalPadding:(double)arg1;
- (void)setFooterCell:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setToggleControlPair:(id)arg1;
- (bool)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)toggleControlDidBeginClickInteraction:(id)arg1;
- (void)toggleControlDidDismssClickInteractionPresentedContent:(id)arg1;
- (void)toggleControlDidPresentClickInteractionPresentedContent:(id)arg1;
- (id)toggleControlPair;

@end
