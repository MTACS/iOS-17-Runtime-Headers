
@protocol SBRootFolderViewDelegate <SBFolderViewDelegate>

@optional

- (UIView *)backgroundViewForDockForRootFolderView:(SBRootFolderView *)arg1;
- (UIView *)backgroundViewForEditingDoneButtonForRootFolderView:(SBRootFolderView *)arg1;
- (double)distanceToTopOfSpotlightIconsForRootFolderView:(SBRootFolderView *)arg1;
- (double)externalDockHeightForRootFolderView:(SBRootFolderView *)arg1;
- (NSString *)iconLocationForListsWithNonDefaultSizedIconsForRootFolderView:(SBRootFolderView *)arg1;
- (double)maxExternalDockHeightForRootFolderView:(SBRootFolderView *)arg1;
- (double)preferredExternalDockVerticalMarginForRootFolderView:(SBRootFolderView *)arg1;
- (void)rootFolderView:(SBRootFolderView *)arg1 didDismissPageManagementWithLayoutManager:(SBRootFolderViewPageManagementLayoutManager *)arg2 context:(NSMutableDictionary *)arg3;
- (void)rootFolderView:(SBRootFolderView *)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2 translation:(double)arg3;
- (void)rootFolderView:(SBRootFolderView *)arg1 didEndOverscrollOnLastPageWithVelocity:(double)arg2 translation:(double)arg3;
- (void)rootFolderView:(SBRootFolderView *)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 didOverscrollOnLastPageByAmount:(double)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 wantsToAdjustLeadingCustomContentForEdgeBounceForScrollOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 willDismissPageManagementUsingAnimator:(id <UIViewImplicitlyAnimating>)arg2 context:(NSMutableDictionary *)arg3;
- (void)rootFolderView:(SBRootFolderView *)arg1 willPresentPageManagementWithLayoutManager:(SBRootFolderViewPageManagementLayoutManager *)arg2 animator:(id <UIViewImplicitlyAnimating>)arg3 context:(NSMutableDictionary *)arg4;
- (void)rootFolderViewDidChangeSuppressesEditingStateForListViews:(SBRootFolderView *)arg1;
- (void)rootFolderViewWantsSearchPresented:(SBRootFolderView *)arg1;
- (void)rootFolderViewWantsToEndEditing:(SBRootFolderView *)arg1;
- (void)rootFolderViewWantsWidgetEditingViewControllerPresented:(SBRootFolderView *)arg1;

@end
