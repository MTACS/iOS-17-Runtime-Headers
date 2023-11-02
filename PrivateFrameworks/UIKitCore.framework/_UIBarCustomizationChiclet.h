
@interface _UIBarCustomizationChiclet : UIView <UIPointerInteractionDelegate> {
    _UIBarCustomizationChicletAnchorView * _anchorView;
    long long  _chicletSize;
    UIView * _contentWrapperView;
    UILabel * _label;
    bool  _labelVisible;
    bool  _minimized;
    UIView * _platterView;
    bool  _platterVisible;
    UIPointerInteraction * _pointerInteraction;
    _UIBarCustomizationItem * _representedItem;
    UIView * _rootItemView;
    NSArray * _subitemViews;
}

@property (nonatomic) _UIBarCustomizationChicletAnchorView *anchorView;
@property (nonatomic) long long chicletSize;
@property (nonatomic, retain) UIView *contentWrapperView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool fixed;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) bool labelVisible;
@property (nonatomic) bool minimized;
@property (nonatomic, retain) UIView *platterView;
@property (nonatomic) bool platterVisible;
@property (nonatomic, retain) UIPointerInteraction *pointerInteraction;
@property (nonatomic, readonly) _UIBarCustomizationItem *representedItem;
@property (nonatomic, retain) UIView *rootItemView;
@property (nonatomic, retain) NSArray *subitemViews;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addContentView:(id)arg1;
- (struct CGSize { double x1; double x2; })_contentSizeWithInterItemSpacing:(double)arg1;
- (struct CGSize { double x1; double x2; })_currentContentSize;
- (double)_currentInterItemSpacing;
- (double)_interItemSpacingForChicletSize:(long long)arg1;
- (bool)_isDisplayingRootItem;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x1; id x2; id x3; bool x4; struct _UITraitCollectionTraitChanges { bool x_5_1_1; bool x_5_1_2; } x5; }*)arg1;
- (void)_updatePlatterShadow;
- (id)anchorView;
- (long long)chicletSize;
- (id)contentWrapperView;
- (struct CGSize { double x1; double x2; })fittingSizeWithChicletSize:(long long)arg1;
- (bool)fixed;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithItem:(id)arg1;
- (id)label;
- (bool)labelVisible;
- (void)layoutSubviews;
- (bool)minimized;
- (id)platterView;
- (bool)platterVisible;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)representedItem;
- (id)rootItemView;
- (void)setAnchorView:(id)arg1;
- (void)setChicletSize:(long long)arg1;
- (void)setContentWrapperView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelVisible:(bool)arg1;
- (void)setMinimized:(bool)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setPlatterVisible:(bool)arg1;
- (void)setPointerInteraction:(id)arg1;
- (void)setRootItemView:(id)arg1;
- (void)setSubitemViews:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)subitemViews;
- (void)updateItemCenterPoints;

@end
