
@interface _FCUIActivityControlMenuFooterView : UIView <FCUIContentSizeCategoryAdjusting, FCUIMenuElement, MTVisualStylingRequiring> {
    bool  _adjustsFontForContentSizeCategory;
    NSMutableDictionary * _categoriesToVisualStylingProviders;
    UIAction * _footerAction;
    UILabel * _footerLabel;
    UIView * _highlightView;
    NSString * _preferredContentSizeCategory;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) UIAction *footerAction;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (getter=isMenuElement, nonatomic, readonly) bool menuElement;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly, copy) NSString *representedObjectIdentifier;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;

+ (id)_preferredFont:(bool)arg1 textStyle:(id)arg2 weight:(double)arg3 additionalTraits:(unsigned int)arg4;

- (void).cxx_destruct;
- (void)_configureFooterLabelIfNecessary;
- (void)_configureHightlightViewIfNecessary;
- (double)_continuousCornerRadius;
- (bool)_needsTextAttributesUpdate;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setNeedsTextAttributesUpdate;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesForFooterLabel;
- (void)_updateTextAttributesIfNecessary;
- (void)_updateVisualStylingOfView:(id)arg1 style:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4 observerBlock:(id /* block */)arg5;
- (void)_visualStylingProvider:(id)arg1 didChangeForCategory:(long long)arg2 outgoingProvider:(id)arg3;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)footerAction;
- (bool)isHighlighted;
- (bool)isMenuElement;
- (void)layoutSubviews;
- (void)performAction;
- (id)preferredContentSizeCategory;
- (id)representedObjectIdentifier;
- (id)requiredVisualStyleCategories;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setFooterAction:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
