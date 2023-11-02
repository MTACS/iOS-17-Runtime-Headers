
@interface NCNotificationListCountIndicatorView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    bool  _animateLayoutForContentTransition;
    <NCNotificationListCountIndicatorViewDelegate> * _delegate;
    BSUIFontProvider * _fontProvider;
    _UILegibilitySettings * _legibilitySettings;
    NSDate * _longPressStartTime;
    unsigned long long  _notificationCount;
    SBUILegibilityLabel * _notificationCountLabel;
    NSString * _preferredContentSizeCategory;
    bool  _shouldAllowLongPressInteraction;
    NSString * _symbolImageName;
    SBUILegibilityLabel * _titleLabel;
    UIButton * _titleLabelButton;
    NSString * _titleString;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListCountIndicatorViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long notificationCount;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic) bool shouldAllowLongPressInteraction;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *symbolImageName;
@property (nonatomic, copy) NSString *titleString;

- (void).cxx_destruct;
- (id)_attributedStringWithText:(id)arg1 symbolName:(id)arg2 withFont:(id)arg3;
- (void)_configureNotificationCountLabelIfNecessary;
- (void)_configureTitleLabelButtonIfNecessary;
- (void)_configureTitleLabelIfNecessary;
- (id)_fontProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_insetBounds;
- (void)_invalidateNotificationCountLabelAnimated:(bool)arg1;
- (void)_invalidateTitleLabelAnimated:(bool)arg1;
- (void)_layoutNotificationCountLabelIfNecessary;
- (void)_layoutTitleLabelButtonIfNecessary;
- (void)_layoutTitleLabelIfNecessary;
- (id)_newLegibilityLabelWithTitle:(id)arg1 symbolName:(id)arg2 withFont:(id)arg3;
- (id)_notificationCountLabelFont;
- (id)_notificationCountString;
- (void)_scaleTitleAndSymbolShouldScale:(bool)arg1;
- (void)_titleButtonTapped:(id)arg1;
- (void)_titleButtonTouchDown:(id)arg1;
- (void)_titleButtonTouchEnded:(id)arg1;
- (id)_titleLabelFont;
- (id)_titleString;
- (void)_updateHighlightingForTitleButton:(id)arg1;
- (void)_updateLongPressStateIsActiveTouch:(bool)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)notificationCount;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotificationCount:(unsigned long long)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setShouldAllowLongPressInteraction:(bool)arg1;
- (void)setSymbolImageName:(id)arg1;
- (void)setTitleString:(id)arg1;
- (bool)shouldAllowLongPressInteraction;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)symbolImageName;
- (id)titleString;

@end
