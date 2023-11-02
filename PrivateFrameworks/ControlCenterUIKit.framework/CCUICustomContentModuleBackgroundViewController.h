
@interface CCUICustomContentModuleBackgroundViewController : UIViewController <CCUIContentModuleBackgroundViewController> {
    NSMutableDictionary * _categoriesToVisualStylingProviders;
    UIView * _customFooterView;
    UIView * _customHeaderView;
    double  _expandedContentModuleHeight;
    double  _expandedContentModuleWidth;
    NSArray * _footerButtons;
    UIImageView * _headerImageView;
    UILabel * _headerTitleLabel;
    CCUICAPackageView * _packageView;
    bool  _positionHeaderToRightInLandscapeRight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expandedContentModuleHeight;
@property (nonatomic) double expandedContentModuleWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool positionHeaderToRightInLandscapeRight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (struct CGPoint { double x1; double x2; })_footerCenterForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })_headerCenterForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_shouldLimitContentSizeCategory;
- (id)_titleFont;
- (void)_updateCustomFooterViewLayoutIfNecessary;
- (void)_updateCustomHeaderViewLayoutIfNecessary;
- (void)_updateFooterButtonsLayoutIfNecessary;
- (void)_updateHeaderGlyphVisualStylingWithProvider:(id)arg1;
- (void)_updateHeaderLayoutIfNecessary;
- (void)_updateTitleFont;
- (void)_visualStylingProvider:(id)arg1 didChangeForCategory:(long long)arg2 outgoingVisualStylingProvider:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectiveContentFrameForContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)expandedContentModuleHeight;
- (double)expandedContentModuleWidth;
- (bool)positionHeaderToRightInLandscapeRight;
- (id)requiredVisualStyleCategories;
- (void)setCustomFooterView:(id)arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setExpandedContentModuleHeight:(double)arg1;
- (void)setExpandedContentModuleWidth:(double)arg1;
- (void)setFooterButtons:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setHeaderGlyphImage:(id)arg1;
- (void)setHeaderGlyphImage:(id)arg1 unscaledSymbolPointSize:(double)arg2;
- (void)setHeaderGlyphPackageDescription:(id)arg1;
- (void)setHeaderGlyphState:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setPositionHeaderToRightInLandscapeRight:(bool)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillLayoutSubviews;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
