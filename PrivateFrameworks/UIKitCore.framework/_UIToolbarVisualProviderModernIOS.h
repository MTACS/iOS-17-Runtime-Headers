
@interface _UIToolbarVisualProviderModernIOS : _UIToolbarVisualProvider <_UIBarAppearanceChangeObserver, _UIBarButtonItemViewOwner> {
    double  _backgroundTransitionProgress;
    _UIBarBackground * _backgroundView;
    _UIBarBackgroundLayout * _backgroundViewLayout;
    _UIToolbarContentView * _contentView;
    UIView * _customBackgroundView;
    long long  _itemDistribution;
    bool  _useModernAppearance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFrame;
- (id)_currentCustomBackground;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_setViewOwnersAndUpdateContentViewForItems:(id)arg1 withOldItems:(id)arg2 animated:(bool)arg3;
- (void)_updateBackgroundLegacyForPosition:(long long)arg1;
- (void)_updateBackgroundModern;
- (void)_updateContentView;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (id)appearanceObserver;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundFrame;
- (double)backgroundTransitionProgress;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentViewMargins;
- (id)currentBackgroundView;
- (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
- (long long)itemDistribution;
- (void)layoutSubviews;
- (void)prepare;
- (void)setBackgroundTransitionProgress:(double)arg1;
- (void)setCustomBackgroundView:(id)arg1;
- (void)setItemDistribution:(long long)arg1;
- (void)setUseModernAppearance:(bool)arg1;
- (bool)toolbarIsSmall;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)updateAppearance;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBackgroundGroupName;
- (void)updateBarBackground;
- (void)updateBarBackgroundSize;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(bool)arg3;
- (bool)useModernAppearance;

@end
