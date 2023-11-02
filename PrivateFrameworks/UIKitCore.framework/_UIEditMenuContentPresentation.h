
@interface _UIEditMenuContentPresentation : _UIEditMenuPresentation <_UIEditMenuListViewDelegate> {
    _UIEditMenuListView * _currentListView;
    _UIEditMenuPresentationLayout * _currentMenuLayout;
    UIEditMenuConfiguration * _dismissingConfiguration;
    long long  _userInterfaceStyle;
}

@property (nonatomic, retain) _UIEditMenuContainerView *containerView;
@property (nonatomic, readonly) _UIEditMenuListView *currentListView;
@property (nonatomic, retain) _UIEditMenuPresentationLayout *currentMenuLayout;
@property (nonatomic, retain) UIEditMenuConfiguration *dismissingConfiguration;
@property (nonatomic) long long userInterfaceStyle;

- (void).cxx_destruct;
- (void)_displayMenu:(id)arg1 reason:(long long)arg2;
- (void)_displayPreparedMenu:(id)arg1 titleView:(id)arg2 reason:(long long)arg3 didDismissMenu:(bool)arg4 configuration:(id)arg5;
- (long long)_listViewAxisForTraitCollection:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_preferredContentInsetsForContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_queryMenuSourceRectForConfiguration:(id)arg1 isValid:(out bool*)arg2;
- (void)_reloadMenuLayoutWithSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (id)_resolvedLayoutForMenuWithConfiguration:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 axis:(long long)arg3;
- (void)_resolvedMenuPositionForArrowDirection:(long long)arg1 availableBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 verticalSpaceRequired:(double)arg4 menuPosition:(inout struct CGPoint { double x1; double x2; }*)arg5 anchorPoint:(inout struct CGPoint { double x1; double x2; }*)arg6;
- (bool)_shouldReuseVisibleMenu;
- (void)_updateMenuPositionAnimated:(bool)arg1 forced:(bool)arg2;
- (bool)canPresentEditMenu;
- (id)configureContainerViewWithConfiguration:(id)arg1;
- (void)contentSizeCategoryDidChangeInEditMenuListView:(id)arg1;
- (id)currentListView;
- (id)currentMenuLayout;
- (void)didTransitionFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)dismissingConfiguration;
- (void)displayMenu:(id)arg1 configuration:(id)arg2;
- (void)editMenuListView:(id)arg1 didSelectMenuElement:(id)arg2;
- (void)hideMenuWithReason:(long long)arg1;
- (long long)initialUserInterfaceStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })menuFrameInCoordinateSpace:(id)arg1;
- (void)replaceVisibleMenuWithMenu:(id)arg1 reason:(long long)arg2;
- (void)setCurrentMenuLayout:(id)arg1;
- (void)setDismissingConfiguration:(id)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)sourceViewDidUpdateFromTraitCollection:(id)arg1;
- (void)teardownContainerView;
- (void)updateMenuPositionAnimated:(bool)arg1;
- (long long)userInterfaceStyle;
- (bool)wantsPasteTouchAuthenticationInEditMenuListView:(id)arg1;

@end
