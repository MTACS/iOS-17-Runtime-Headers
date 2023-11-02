
@protocol SBRootFolderControllerDelegate <SBFolderControllerDelegate>

@optional

- (SBHAddWidgetSheetConfigurationManager *)addWidgetSheetConfigurationManagerForRootFolderController:(SBRootFolderController *)arg1;
- (unsigned long long)addWidgetSheetStyleForRootFolderController:(SBRootFolderController *)arg1;
- (SBHIconImageCache *)appIconImageCacheForRootFolderController:(SBRootFolderController *)arg1;
- (UIView *)backgroundViewForDockForRootFolderController:(SBRootFolderController *)arg1;
- (UIView *)backgroundViewForEditingDoneButtonForRootFolderController:(SBRootFolderController *)arg1;
- (double)distanceToTopOfSpotlightIconsForRootFolderController:(SBRootFolderController *)arg1;
- (double)externalDockHeightForRootFolderController:(SBRootFolderController *)arg1;
- (SBIconListView *)externalDockIconListViewForRootFolderController:(SBRootFolderController *)arg1;
- (NSString *)iconLocationForListsWithNonDefaultSizedIconsForRootFolderController:(SBRootFolderController *)arg1;
- (double)maxExternalDockHeightForRootFolderController:(SBRootFolderController *)arg1;
- (double)preferredExternalDockVerticalMarginForRootFolderController:(SBRootFolderController *)arg1;
- (bool)rootFolderController:(SBRootFolderController *)arg1 allowsRemovalOfIconDataSourceWithinStack:(id <SBLeafIconDataSource>)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 didChangeSidebarVisibilityProgress:(double)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 didDismissPageManagementWithLayoutManager:(SBRootFolderViewPageManagementLayoutManager *)arg2 context:(NSMutableDictionary *)arg3;
- (void)rootFolderController:(SBRootFolderController *)arg1 didDismissWidgetEditingViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2 translation:(double)arg3;
- (void)rootFolderController:(SBRootFolderController *)arg1 didEndOverscrollOnLastPageWithVelocity:(double)arg2 translation:(double)arg3;
- (void)rootFolderController:(SBRootFolderController *)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 didOverscrollOnLastPageByAmount:(double)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 didPresentWidgetEditingViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg2;
- (UIView<SBIconDragPreview> *)rootFolderController:(SBRootFolderController *)arg1 dragPreviewForIconView:(SBIconView *)arg2;
- (SBIcon *)rootFolderController:(SBRootFolderController *)arg1 draggedIconForStackConfigurationInteractionForIdentifier:(NSString *)arg2;
- (void)rootFolderController:(void *)arg1 handleInsertionForWidgetIcon:(void *)arg2 withReferenceIconView:(void *)arg3 fromPresenter:(void *)arg4 dismissViewControllerHandler:(void *)arg5; // needs 5 arg types, found 9: SBRootFolderController *, SBWidgetIcon *, SBIconView *, <SBHWidgetSheetViewControllerPresenter> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)rootFolderController:(SBRootFolderController *)arg1 noteDidRemoveSuggestedWidgetIcon:(SBWidgetIcon *)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 noteDragItemWasConsumedExternallyForDropSession:(id <UIDropSession>)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 prepareAddSheetViewController:(SBHAddWidgetSheetViewController *)arg2;
- (<SBLeafIconDataSource> *)rootFolderController:(SBRootFolderController *)arg1 promoteSuggestedWidget:(id <SBLeafIconDataSource>)arg2 withinStack:(SBWidgetIcon *)arg3;
- (void)rootFolderController:(SBRootFolderController *)arg1 setSuppressesEditingStateForExternalDockListViews:(bool)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 statusBarInsetsDidChange:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 viewDidTransitionToSize:(struct CGSize { double x1; double x2; })arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 wantsToAdjustLeadingCustomContentForEdgeBounceForScrollOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 willDismissPageManagementUsingAnimator:(id <UIViewImplicitlyAnimating>)arg2 context:(NSMutableDictionary *)arg3;
- (void)rootFolderController:(SBRootFolderController *)arg1 willDismissWidgetEditingViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 willPresentAddSheetViewController:(SBHAddWidgetSheetViewControllerBase<SBHMainAddSheetViewControlling> *)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 willPresentPageManagementWithLayoutManager:(SBRootFolderViewPageManagementLayoutManager *)arg2 animator:(id <UIViewImplicitlyAnimating>)arg3 context:(NSMutableDictionary *)arg4;
- (void)rootFolderController:(SBRootFolderController *)arg1 willPresentWidgetEditingViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 willUsePropertyAnimator:(UIViewPropertyAnimator *)arg2 toTransitionToState:(long long)arg3;
- (void)rootFolderController:(SBRootFolderController *)arg1 willUseTransitionContext:(SBViewControllerTransitionContext *)arg2 toTransitionToState:(long long)arg3;
- (bool)rootFolderControllerCanUseSeparateWindowForRotation:(SBRootFolderController *)arg1;
- (void)rootFolderControllerDidAcceptWidgetIntroduction:(SBRootFolderController *)arg1;
- (void)rootFolderControllerDidEditWidgetIntroduction:(SBRootFolderController *)arg1;
- (bool)rootFolderControllerDidSetPrototypeSettingEditAsUndo:(SBRootFolderController *)arg1;
- (void)rootFolderControllerDidUndoWidgetIntroduction:(SBRootFolderController *)arg1;
- (void)rootFolderControllerViewDidDisappear:(SBRootFolderController *)arg1;
- (void)rootFolderControllerViewWillAppear:(SBRootFolderController *)arg1;
- (void)rootFolderControllerWillAnimateWidgetInsertionForStackConfigurationInteraction:(SBRootFolderController *)arg1;
- (UIWindow<SBIconDragPreviewContaining> *)windowForStackConfigurationIconDragPreviewsForRootFolderController:(SBRootFolderController *)arg1 forWindowScene:(UIWindowScene *)arg2;

@end
