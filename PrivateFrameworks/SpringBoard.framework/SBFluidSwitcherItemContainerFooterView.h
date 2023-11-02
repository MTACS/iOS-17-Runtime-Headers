
@interface SBFluidSwitcherItemContainerFooterView : SBFTouchPassThroughView <PTSettingsKeyObserver, UIPointerInteractionDelegate> {
    <SBFluidSwitcherItemContainerFooterViewDelegate> * _delegate;
    unsigned long long  _footerStyle;
    unsigned long long  _iconAlignment;
    double  _iconHitTestOutset;
    NSMutableArray * _iconViews;
    SBMedusaSettings * _settings;
    BSUIEmojiLabelView * _subtitleLabel;
    long long  _subtitleStylingUserInterfaceStyle;
    UITapGestureRecognizer * _tapGestureRecognizer;
    double  _textAlpha;
    NSArray * _titleItems;
    NSMutableArray * _titleLabels;
    bool  _uniqueIconsOnly;
    NSArray * _visibleTitleItems;
    bool  _wantsIconPointerInteractions;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SBFluidSwitcherItemContainerFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long footerStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iconAlignment;
@property (nonatomic) double iconHitTestOutset;
@property (readonly) Class superclass;
@property (nonatomic) double textAlpha;
@property (nonatomic) bool uniqueIconsOnly;
@property (nonatomic) bool wantsIconPointerInteractions;

- (void).cxx_destruct;
- (id)_attributedTextFromText:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (bool)_hasTitleShadow;
- (bool)_isTextEffectivelyEmpty:(id)arg1;
- (id)_makeIconView;
- (id)_makeLabel;
- (id)_makeSubtitleLabel;
- (double)_maximumTitleLabelHeight;
- (void)_reloadVisibleTitleItems;
- (void)_updateIconPointerInteractions;
- (void)_updateIconViewShadow:(id)arg1;
- (void)_updateIconViewsAndLabels;
- (void)_updateLabels;
- (void)_updateSubtitleLabel;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)footerStyle;
- (unsigned long long)iconAlignment;
- (double)iconHitTestOutset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 delegate:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setFooterStyle:(unsigned long long)arg1;
- (void)setIconAlignment:(unsigned long long)arg1;
- (void)setIconHitTestOutset:(double)arg1;
- (void)setTextAlpha:(double)arg1;
- (void)setTitleItems:(id)arg1 animated:(bool)arg2;
- (void)setUniqueIconsOnly:(bool)arg1;
- (void)setWantsIconPointerInteractions:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)textAlpha;
- (bool)uniqueIconsOnly;
- (bool)wantsIconPointerInteractions;

@end
