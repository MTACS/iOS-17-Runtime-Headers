
@interface NCClickInteractionPresentedView : UIView <MTVisualStylingRequiring, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSizeThatFits;
    NSString * _preferredContentSizeCategory;
    UILabel * _titleLabel;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_configureTitleLabel;
- (void)_darkerSystemColorsStatusDidChange:(id)arg1;
- (void)_reduceTransparencyStatusDidChange:(id)arg1;
- (void)_updateTitleLabelAnchorPointAndPosition;
- (void)_updateTitleLabelTextAttributes;
- (void)_updateTitleLabelVisualStyling;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (void)dealloc;
- (void)didMoveToSuperview;
- (id)initWithTitle:(id)arg1;
- (void)layoutSubviews;
- (id)preferredContentSizeCategory;
- (id)requiredVisualStyleCategories;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
