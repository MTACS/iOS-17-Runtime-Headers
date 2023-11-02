
@interface FCUIOptionsControl : UIControl <FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring, UIPointerInteractionDelegate> {
    bool  _adjustsFontForContentSizeCategory;
    UIView * _backgroundView;
    long long  _controlType;
    UIImageView * _glyphView;
    MTVisualStylingProvider * _glyphVisualStylingProvider;
    double  _maxPointSize;
    bool  _parentControlHighlighted;
    bool  _parentControlSelected;
    NSString * _preferredContentSizeCategory;
    UIFont * _referenceFont;
    double  _referencePointSize;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) long long controlType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isParentControlHighlighted, nonatomic) bool parentControlHighlighted;
@property (getter=isParentControlSelected, nonatomic) bool parentControlSelected;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureGlyphViewIfNecessary;
- (id)_glyphImageNameForCurrentStateWithControlType:(long long)arg1;
- (long long)_glyphViewVisualStyleForCurrentState;
- (bool)_needsTextAttributesUpdate;
- (double)_scaledValueForValue:(double)arg1;
- (void)_setNeedsTextAttributesUpdate;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesIfNecessary;
- (void)_updateVisualStylingOfView:(id)arg1 style:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;
- (void)_visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (long long)controlType;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithReferencePointSize:(double)arg1 maximumPointSize:(double)arg2;
- (bool)isParentControlHighlighted;
- (bool)isParentControlSelected;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (id)preferredContentSizeCategory;
- (id)requiredVisualStyleCategories;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setControlType:(long long)arg1;
- (void)setGlyphVisualStylingProvider:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setParentControlHighlighted:(bool)arg1;
- (void)setParentControlSelected:(bool)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
