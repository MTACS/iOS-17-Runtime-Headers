
@interface _UIToolbarVisualProviderLegacyIOS : _UIToolbarVisualProvider {
    _UIBarBackground * _backgroundView;
    _UIBarBackgroundLayoutLegacy * _backgroundViewLayout;
    UIView * _customBackgroundView;
}

- (void).cxx_destruct;
- (void)_createViewsForItems:(id)arg1;
- (id)_currentCustomBackground;
- (double)_edgeMarginForBorderedItem:(bool)arg1 isText:(bool)arg2;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(bool)arg3 actuallyRepositionButtons:(bool)arg4;
- (id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id*)arg2 withHitRects:(id*)arg3 buttonIndexes:(id*)arg4 textButtonIndexes:(id*)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundFrame;
- (id)currentBackgroundView;
- (void)customViewChangedForButtonItem:(id)arg1;
- (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
- (void)drawBackgroundViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(bool)arg1;
- (void)setCustomBackgroundView:(id)arg1;
- (bool)toolbarIsSmall;
- (void)updateBackgroundGroupName;
- (void)updateBarBackground;
- (void)updateBarBackgroundSize;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateItemsForNewFrame:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(bool)arg3;

@end
