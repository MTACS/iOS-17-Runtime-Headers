
@protocol SFCapsuleCollectionViewDelegate <NSObject>

@optional

- (void)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 didSelectItemAtIndex:(long long)arg2;
- (double)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 distanceToTopEdgeIncludingDeceleration:(bool)arg2;
- (double)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 heightForItemAtIndex:(long long)arg2 width:(double)arg3 state:(long long)arg4;
- (void)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 selectedItemWillChangeToState:(long long)arg2 options:(long long)arg3 coordinator:(id <SFTransitionCoordinating>)arg4;
- (bool)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 shouldHideShadowForItemAtIndex:(long long)arg2;
- (void)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 willChangeToLayoutStyle:(long long)arg2;
- (void)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 willPerformUpdateWithCoordinator:(id <SFTransitionCoordinating>)arg2;
- (void)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 willSelectItemAtIndex:(long long)arg2 coordinator:(id <SFTransitionCoordinating>)arg3;
- (bool)capsuleCollectionViewAllowsMinimizationGesture:(SFCapsuleCollectionView *)arg1;
- (unsigned long long)capsuleCollectionViewBoundaryEdgesForScrollableContent:(SFCapsuleCollectionView *)arg1;
- (bool)capsuleCollectionViewContentScaleCompletesMinimization:(SFCapsuleCollectionView *)arg1;
- (void)capsuleCollectionViewLayoutStyleDidChange:(SFCapsuleCollectionView *)arg1;
- (double)capsuleCollectionViewMinimizedContentScale:(SFCapsuleCollectionView *)arg1;
- (bool)capsuleCollectionViewShouldDelayToolbarPresentation:(SFCapsuleCollectionView *)arg1;
- (bool)capsuleCollectionViewShouldFocusSelectedItem:(SFCapsuleCollectionView *)arg1;
- (void)capsuleCollectionViewWillHideKeyboard:(SFCapsuleCollectionView *)arg1;
- (void)capsuleCollectionViewWillReloadData:(SFCapsuleCollectionView *)arg1;
- (UIView *)createToolbarForCapsuleCollectionView:(SFCapsuleCollectionView *)arg1;
- (UIAction *)topActionForCapsuleCollectionView:(SFCapsuleCollectionView *)arg1;
- (UIAction *)trailingActionForCapsuleCollectionView:(SFCapsuleCollectionView *)arg1;

@end
