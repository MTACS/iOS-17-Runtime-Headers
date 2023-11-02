
@interface TUIAssistantButtonBarGroupView : UIView <_UIBarButtonItemViewOwner> {
    UIBarButtonItemGroup * _barButtonItemGroup;
    <TUIButtonBarViewProvider> * _buttonProvider;
    bool  _collapsed;
    double  _itemSpacing;
    NSMutableArray * _visibleButtons;
    _UIButtonBarButtonVisualProvider * _visualProvider;
}

@property (nonatomic, retain) UIBarButtonItemGroup *barButtonItemGroup;
@property (nonatomic) <TUIButtonBarViewProvider> *buttonProvider;
@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic, readonly) bool containsFlexibleItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double itemSpacing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *visibleButtons;
@property (nonatomic, retain) _UIButtonBarButtonVisualProvider *visualProvider;

- (void).cxx_destruct;
- (id)_buttonBarItemViewForBarButtonItem:(id)arg1;
- (bool)_canBeCollapsed;
- (void)_ensureVisibleButtonsForVisibleItems;
- (void)_groupDidUpdateItems:(id)arg1 removedItems:(id)arg2;
- (void)_groupDidUpdateRepresentative:(id)arg1 fromRepresentative:(id)arg2;
- (void)_groupDidUpdateVisibility:(id)arg1;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (struct CGSize { double x1; double x2; })_preferredSizeForItems:(id)arg1 fittingWidth:(double)arg2;
- (void)_updateViewForBarButtonItem:(id)arg1;
- (id)_visibleItems;
- (id)_visibleItemsAllowingCollapse:(bool)arg1;
- (id)barButtonItemGroup;
- (id)buttonProvider;
- (bool)containsFlexibleItems;
- (id)initWithBarButtonItemGroup:(id)arg1 visualProvider:(id)arg2 buttonProvider:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCollapsed;
- (double)itemSpacing;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBarButtonItemGroup:(id)arg1;
- (void)setButtonProvider:(id)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setItemSpacing:(double)arg1;
- (void)setVisualProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)visibleButtons;
- (id)visualProvider;

@end
