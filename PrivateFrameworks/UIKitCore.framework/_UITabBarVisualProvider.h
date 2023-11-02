
@interface _UITabBarVisualProvider : NSObject {
    NSString * _backdropGroupName;
    UITabBar * _tabBar;
}

@property (nonatomic, readonly) <_UIBarAppearanceChangeObserver> *appearanceObserver;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic) double backgroundTransitionProgress;
@property (nonatomic) double minimumWidthForHorizontalLayout;
@property (nonatomic, readonly) UITabBar *tabBar;
@property (nonatomic) bool useModernAppearance;

+ (bool)shouldDecodeSubviews;

- (void).cxx_destruct;
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
- (id)_shim_shadowView;
- (void)_shim_updateFocusHighlightVisibility;
- (void)_shim_updateTabBarItemView:(id)arg1;
- (id)appearanceObserver;
- (id)backdropGroupName;
- (double)backgroundTransitionProgress;
- (void)changeAppearance;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(bool)arg4;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(bool)arg5;
- (void)changeLayout;
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;
- (id)createViewForTabBarItem:(id)arg1;
- (double)defaultAnimationDuration;
- (id)defaultTintColor;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;
- (id)initWithTabBar:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeGivenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (double)minimumWidthForHorizontalLayout;
- (id)preferredFocusedView;
- (void)prepare;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackgroundTransitionProgress:(double)arg1;
- (void)setBackgroundTransitionProgress:(double)arg1 forceUpdate:(bool)arg2 animated:(bool)arg3;
- (void)setMinimumWidthForHorizontalLayout:(double)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setUseModernAppearance:(bool)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (id)tabBar;
- (void)tabBarSizeChanged:(struct CGSize { double x1; double x2; })arg1;
- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBackgroundGroupName;
- (void)updateConstraints;
- (bool)useModernAppearance;
- (bool)wantsFocus;

@end
