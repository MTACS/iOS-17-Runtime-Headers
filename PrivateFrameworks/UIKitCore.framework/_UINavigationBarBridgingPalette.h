
@interface _UINavigationBarBridgingPalette : _UINavigationBarPalette <_UINavigationPalette> {
    UIView * _temporaryBackgroundView;
}

@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (setter=_setPaletteOverridesPinningBar:, nonatomic) bool _paletteOverridesPinningBar;
@property (nonatomic, readonly) unsigned long long boundaryEdge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UINavigationController *navController;
@property (nonatomic) bool paletteShadowIsHidden;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic) bool pinningBarShadowIsHidden;
@property (nonatomic) bool pinningBarShadowWasHidden;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredContentInsets;
@property (readonly) Class superclass;
@property (getter=isVisibleWhenPinningBarIsHidden, nonatomic) bool visibleWhenPinningBarIsHidden;

- (void).cxx_destruct;
- (id)_attachedPinningTopBar;
- (id)_backgroundView;
- (void)_configureConstraintsForBackground:(id)arg1;
- (void)_configurePaletteConstraintsForBoundary;
- (void)_disableConstraints;
- (void)_enableConstraints;
- (bool)_paletteOverridesPinningBar;
- (void)_resetConstraintConstants:(double)arg1;
- (void)_resetHeightConstraintConstant;
- (void)_setAttached:(bool)arg1 didComplete:(bool)arg2;
- (void)_setBackgroundView:(id)arg1;
- (void)_setLeftConstraintConstant:(double)arg1;
- (void)_setPaletteOverridesPinningBar:(bool)arg1;
- (void)_setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setTopConstraintConstant:(double)arg1;
- (void)_setupBackgroundViewIfNecessary;
- (bool)_shouldUpdateBackground;
- (void)_updateBackgroundConstraintsIfNecessary;
- (void)_updateBackgroundView;
- (unsigned long long)boundaryEdge;
- (bool)isAttached;
- (bool)isVisibleWhenPinningBarIsHidden;
- (id)navController;
- (bool)paletteIsHidden;
- (bool)paletteShadowIsHidden;
- (bool)pinningBarShadowIsHidden;
- (bool)pinningBarShadowWasHidden;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredContentInsets;
- (void)resetBackgroundConstraints;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isAnimating:(bool)arg2;
- (void)setPaletteShadowIsHidden:(bool)arg1;
- (void)setPinningBarShadowIsHidden:(bool)arg1;
- (void)setPinningBarShadowWasHidden:(bool)arg1;
- (void)setPreferredContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisibleWhenPinningBarIsHidden:(bool)arg1;

@end
