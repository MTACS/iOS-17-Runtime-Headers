
@interface PKPaletteBarButton : PKPaletteButton <_UIBarButtonItemViewOwner> {
    UIBarButtonItem * _barButtonItem;
    UIView * _customView;
    id /* block */  _menuProvider;
}

@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;
@property (nonatomic, retain) UIView *customView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ menuProvider;
@property (readonly) Class superclass;

+ (id)_imageByApplyingDefaultImageSymbolConfigurationWithImage:(id)arg1;

- (void).cxx_destruct;
- (void)_checkCurrentBarButtonItemState;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (void)_handleTouchUpInside:(id)arg1 event:(id)arg2;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_updateForButtonItemChange;
- (void)_updateMenu;
- (id)barButtonItem;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)customView;
- (id)initWithBarButtonItem:(id)arg1;
- (void)layoutSubviews;
- (id /* block */)menuProvider;
- (void)setCustomView:(id)arg1;
- (void)setMenuProvider:(id /* block */)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setTintColor:(id)arg1;

@end
