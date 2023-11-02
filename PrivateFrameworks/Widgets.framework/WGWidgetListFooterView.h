
@interface WGWidgetListFooterView : UIView <MTMaterialGrouping, UITextViewDelegate> {
    UIView * _contentView;
    UIButton * _customizeButton;
    MTMaterialView * _customizeButtonBackground;
    <WGWidgetListFooterViewDelegate> * _delegate;
    WGShortLookStyleButton * _editButton;
    long long  _layoutMode;
    _UILegibilitySettings * _legibilitySettings;
    UIFont * _referenceFont;
    bool  _shouldSizeContent;
    WGNewWidgetsButton * _widgetAvailableButton;
    NSMutableDictionary * _widgetIDsToAttributionViews;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, retain) UIButton *customizeButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WGWidgetListFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WGShortLookStyleButton *editButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutMode;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic) bool shouldBlurContent;
@property (nonatomic) bool shouldSizeContent;
@property (readonly) Class superclass;
@property (nonatomic, retain) WGNewWidgetsButton *widgetAvailableButton;

- (void).cxx_destruct;
- (void)_addCustomizeButton;
- (void)_availableWidgetsUpdated:(id)arg1;
- (id)_referenceFont;
- (void)_setAttributedString:(id)arg1 forWidgetIdentifier:(id)arg2;
- (void)_updateForContentCategorySizeDidChange;
- (id)contentView;
- (id)customizeButton;
- (id)delegate;
- (id)editButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateSubviewGeometery;
- (long long)layoutMode;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)materialGroupNameBase;
- (void)setCustomizeButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setLayoutMode:(long long)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setShouldBlurContent:(bool)arg1;
- (void)setShouldSizeContent:(bool)arg1;
- (void)setVisibleWidgetsIDs:(id)arg1;
- (void)setWidgetAvailableButton:(id)arg1;
- (bool)shouldBlurContent;
- (bool)shouldSizeContent;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (id)widgetAvailableButton;

@end
