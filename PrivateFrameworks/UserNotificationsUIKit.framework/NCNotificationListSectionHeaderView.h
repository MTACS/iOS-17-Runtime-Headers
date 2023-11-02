
@interface NCNotificationListSectionHeaderView : UIView <NCLegibilitySettingsAdjusting, NCToggleControlDelegate, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NCToggleControl * _clearButton;
    UIButton * _collapseButton;
    <NCNotificationListSectionHeaderViewDelegate> * _delegate;
    NCNotificationListHeaderTitleView * _headerTitleView;
    _UILegibilitySettings * _legibilitySettings;
    NSString * _materialGroupNameBase;
    NSString * _preferredContentSizeCategory;
    NSString * _sectionIdentifier;
    bool  _showCollapseButton;
    NSString * _title;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, readonly) UIControl *clearButton;
@property (nonatomic, retain) UIButton *collapseButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListSectionHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationListHeaderTitleView *headerTitleView;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic) bool showCollapseButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (struct CGSize { double x1; double x2; })_clearButtonPreferredSize;
+ (struct CGSize { double x1; double x2; })_collapseButtonPreferredSize;
+ (double)headerHeightWithWidth:(double)arg1 title:(id)arg2 isShowingCollapseButton:(bool)arg3;

- (void).cxx_destruct;
- (void)_configureClearButtonIfNecessary;
- (void)_configureCollapseButtonIfNecessary;
- (void)_configureHeaderTitleViewIfNecessary;
- (void)_contentSizeCategoryDidChange;
- (void)_handleClearAll:(id)arg1;
- (void)_handleClearButtonPrimaryActionTriggered:(id)arg1;
- (void)_handleClearButtonTouchUpInside:(id)arg1;
- (void)_handleCollapseActionTriggered:(id)arg1;
- (void)_layoutClearButton;
- (void)_layoutCollapseButton;
- (void)_layoutHeaderTitleView;
- (id)_legibilitySettings;
- (void)_resetClearButtonStateAnimated:(bool)arg1;
- (void)_updateHeaderTitleViewWithLegibilitySettings:(id)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (id)clearButton;
- (id)collapseButton;
- (id)containerViewForToggleControlClickInteractionPresentedContent:(id)arg1;
- (id)delegate;
- (bool)dismissModalFullScreenIfNeeded;
- (id)headerTitleView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)materialGroupNameBase;
- (id)preferredContentSizeCategory;
- (void)resetClearButtonStateAnimated:(bool)arg1;
- (id)sectionIdentifier;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setCollapseButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTitleView:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setShowCollapseButton:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)showCollapseButton;
- (id)title;
- (void)toggleControlDidBeginClickInteraction:(id)arg1;
- (void)toggleControlDidDismssClickInteractionPresentedContent:(id)arg1;
- (void)toggleControlDidPresentClickInteractionPresentedContent:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
