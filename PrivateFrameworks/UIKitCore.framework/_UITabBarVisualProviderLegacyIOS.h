
@interface _UITabBarVisualProviderLegacyIOS : _UITabBarVisualProvider <PTSettingsKeyObserver, UIPointerInteractionDelegate, _UIBarAppearanceChangeObserver> {
    UIView * _accessoryView;
    double  _backgroundTransitionProgress;
    _UIBarBackground * _backgroundView;
    _UIBarBackgroundLayout * _backgroundViewLayout;
    UIView * _customBackgroundView;
    double  _minimumWidthForHorizontalLayout;
    UIPointerInteraction * _pointerInteraction;
    long long  _style;
    bool  _useModernAppearance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;
- (void)_configureItems:(id)arg1;
- (id)_focusedItemHighlightView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layoutRegion;
- (void)_layoutTabBarItems;
- (id)_preferredFocusedViewCarplay;
- (id)_preferredFocusedViewiOS;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_shadowFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 height:(double)arg2;
- (id)_shim_accessoryView;
- (id)_shim_compatibilityBackgroundView;
- (double)_shim_heightForCustomizingItems;
- (void)_shim_layoutItemsOnly;
- (void)_shim_setAccessoryView:(id)arg1;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (void)_shim_setShadowAlpha:(double)arg1;
- (void)_shim_setShadowHidden:(bool)arg1;
- (double)_shim_shadowAlpha;
- (bool)_shim_shadowHidden;
- (void)_shim_updateTabBarItemView:(id)arg1;
- (long long)_styleForTraitCollection:(id)arg1;
- (void)_updateAccessoryView;
- (void)_updateAppearanceForTransitionFromItem:(id)arg1 toItem:(id)arg2;
- (void)_updateBackgroundAnimated:(bool)arg1;
- (void)_updateBackgroundLegacy;
- (void)_updateBackgroundModern;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (id)appearanceObserver;
- (double)backgroundTransitionProgress;
- (void)changeAppearance;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(bool)arg5;
- (void)changeLayout;
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;
- (id)createViewForTabBarItem:(id)arg1;
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeGivenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (double)minimumWidthForHorizontalLayout;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)preferredFocusedView;
- (void)prepare;
- (void)setBackgroundTransitionProgress:(double)arg1;
- (void)setBackgroundTransitionProgress:(double)arg1 forceUpdate:(bool)arg2 animated:(bool)arg3;
- (void)setMinimumWidthForHorizontalLayout:(double)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setUseModernAppearance:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBackgroundGroupName;
- (bool)useModernAppearance;

@end
