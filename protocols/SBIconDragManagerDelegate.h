
@protocol SBIconDragManagerDelegate <NSObject>

@required

- (SBRootFolder *)rootFolderForIconDragManager:(SBIconDragManager *)arg1;

@optional

- (bool)allowsNestedFoldersForIconDragManager:(SBIconDragManager *)arg1;
- (bool)allowsSnappingIconsToGridForIconDragManager:(SBIconDragManager *)arg1;
- (double)defaultIconLayoutAnimationDurationForIconDragManager:(SBIconDragManager *)arg1;
- (void)dismissLibraryForIconDragManager:(SBIconDragManager *)arg1 windowScene:(UIWindowScene *)arg2;
- (void)dismissTodayOverlayForIconDragManager:(SBIconDragManager *)arg1;
- (double)iconDragManager:(SBIconDragManager *)arg1 additionalDragLiftScaleForIconView:(SBIconView *)arg2;
- (bool)iconDragManager:(SBIconDragManager *)arg1 canAcceptDropInSession:(id <UIDropSession>)arg2 inIconListView:(SBIconListView *)arg3;
- (bool)iconDragManager:(SBIconDragManager *)arg1 canAddDragItemsToSession:(id <UIDragSession>)arg2 fromIconView:(SBIconView *)arg3;
- (bool)iconDragManager:(SBIconDragManager *)arg1 canBeginDragForIconView:(SBIconView *)arg2;
- (bool)iconDragManager:(SBIconDragManager *)arg1 canBeginIconDragForIconView:(SBIconView *)arg2;
- (bool)iconDragManager:(SBIconDragManager *)arg1 canMakeIconViewDragRecipient:(SBIconView *)arg2;
- (bool)iconDragManager:(SBIconDragManager *)arg1 canSnapIconsToGridInLocation:(NSString *)arg2;
- (void)iconDragManager:(SBIconDragManager *)arg1 didAddItemsToIconDragWithUniqueIdentifier:(NSUUID *)arg2 numberOfDraggedItems:(unsigned long long)arg3;
- (void)iconDragManager:(SBIconDragManager *)arg1 didEndDragOriginatingFromIconView:(SBIconView *)arg2 userDidBeginDrag:(bool)arg3 lastUserInteractionDate:(NSDate *)arg4;
- (void)iconDragManager:(SBIconDragManager *)arg1 didEndIconDragWithUniqueIdentifier:(NSUUID *)arg2 numberOfDraggedItems:(unsigned long long)arg3;
- (void)iconDragManager:(SBIconDragManager *)arg1 didSpringLoadIconView:(SBIconView *)arg2;
- (bool)iconDragManager:(SBIconDragManager *)arg1 doesIconViewRepresentRealIconPosition:(SBIconView *)arg2;
- (UIView<SBIconDragPreview> *)iconDragManager:(SBIconDragManager *)arg1 dragPreviewForIconView:(SBIconView *)arg2;
- (SBIcon *)iconDragManager:(SBIconDragManager *)arg1 draggedIconForIdentifier:(NSString *)arg2;
- (long long)iconDragManager:(SBIconDragManager *)arg1 draggingStartLocationForIconView:(SBIconView *)arg2 proposedStartLocation:(long long)arg3;
- (bool)iconDragManager:(SBIconDragManager *)arg1 dragsSupportSystemDragsForIconView:(SBIconView *)arg2;
- (void)iconDragManager:(SBIconDragManager *)arg1 folderController:(SBFolderController *)arg2 draggedIconShouldDropFromListView:(SBIconListView *)arg3;
- (void)iconDragManager:(SBIconDragManager *)arg1 iconDropSessionDidEnter:(id <UIDropSession>)arg2;
- (void)iconDragManager:(SBIconDragManager *)arg1 iconView:(SBIconView *)arg2 willAnimateDragLiftWithAnimator:(id <UIDragAnimating>)arg3 session:(id <UIDragSession>)arg4;
- (NSSet *)iconDragManager:(SBIconDragManager *)arg1 launchActionsForIconView:(SBIconView *)arg2;
- (NSURL *)iconDragManager:(SBIconDragManager *)arg1 launchURLForIconView:(SBIconView *)arg2;
- (NSString *)iconDragManager:(SBIconDragManager *)arg1 localizedFolderNameForCombiningIcon:(SBIcon *)arg2 withIcon:(SBIcon *)arg3;
- (bool)iconDragManager:(SBIconDragManager *)arg1 shouldDuplicateIconsInDragSession:(id <UIDragDropSession>)arg2;
- (UITargetedDragPreview *)iconDragManager:(SBIconDragManager *)arg1 targetedDragPreviewForIconView:(SBIconView *)arg2 item:(UIDragItem *)arg3 session:(id <UIDragSession>)arg4 previewParameters:(UIDragPreviewParameters *)arg5;
- (void)iconDragManager:(SBIconDragManager *)arg1 wantsAnimatedRemovalOfIcon:(SBIcon *)arg2;
- (void)iconDragManager:(SBIconDragManager *)arg1 willBeginIconDragWithUniqueIdentifier:(NSUUID *)arg2 numberOfDraggedItems:(unsigned long long)arg3;
- (void)iconDragManagerIconDraggingDidChange:(SBIconDragManager *)arg1;
- (void)iconDragManagerMultiItemIconDraggingDidChange:(SBIconDragManager *)arg1;
- (<SBHIconLayoutHiding> *)iconLayoutHiderForIconDragManager:(SBIconDragManager *)arg1;
- (SBIconListView *)iconListViewForIndexPath:(NSIndexPath *)arg1;
- (SBHIconModel *)iconModel;
- (<SBIconViewDelegate> *)iconViewDelegateForExternalDragForIconDragManager:(SBIconDragManager *)arg1;
- (<SBIconViewQuerying> *)iconViewQueryableForIconDragManager:(SBIconDragManager *)arg1;
- (bool)isAnimatingFolderIconTransitionForIconDragManager:(SBIconDragManager *)arg1;
- (bool)isEditing;
- (bool)isEditingAllowedForIconListView:(SBIconListView *)arg1;
- (bool)isEditingAllowedForIconView:(SBIconView *)arg1;
- (bool)isEditingForIconListView:(SBIconListView *)arg1;
- (bool)isFolderOpenForIconDragManager:(SBIconDragManager *)arg1;
- (bool)isIconContentPossiblyVisibleOverApplication;
- (bool)isMainDisplayLibraryViewVisible;
- (bool)isOverlayTodayViewVisible;
- (bool)isRootFolderContentVisible;
- (bool)isScrolling;
- (bool)isTrackingScroll;
- (void)layoutIconListsWithAnimationType:(long long)arg1;
- (void)layoutIconListsWithAnimationType:(long long)arg1 forceRelayout:(bool)arg2;
- (unsigned long long)listGridCellInfoOptionsForIconDragManager:(SBIconDragManager *)arg1;
- (void)presentLibraryForIconDragManager:(SBIconDragManager *)arg1 windowScene:(UIWindowScene *)arg2;
- (void)presentTodayOverlayForIconDragManager:(SBIconDragManager *)arg1;
- (void)pushExpandedIcon:(void *)arg1 location:(void *)arg2 context:(void *)arg3 animated:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: SBIcon *, NSString *, <SBHIconLaunchContext> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (SBRootFolderController *)rootFolderControllerForIconDragManager:(SBIconDragManager *)arg1;
- (UIView *)rootViewForIconDragManager:(SBIconDragManager *)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 fromIconListView:(SBIconListView *)arg2;
- (void)setEditing:(bool)arg1 fromIconView:(SBIconView *)arg2;
- (void)setMainDisplayLibraryViewVisible:(bool)arg1;
- (void)setOverlayTodayViewVisible:(bool)arg1;
- (void)setScrolling:(bool)arg1;
- (void)setTrackingScroll:(bool)arg1;
- (bool)shouldNonDefaultGridSizeClassesUseClusterAnimationForIconDragManager:(SBIconDragManager *)arg1;
- (<SBHUndoProviding> *)undoProviderForIconDragManager:(SBIconDragManager *)arg1;
- (SBHWidgetInsertionRippleIconAnimator *)widgetInsertionRippleIconAnimatorForIcon:(SBWidgetIcon *)arg1 iconListView:(SBIconListView *)arg2 withReferenceIconView:(SBIconView *)arg3;
- (UIWindow<SBIconDragPreviewContaining> *)windowForIconDragPreviewsForIconDragManager:(SBIconDragManager *)arg1 forWindowScene:(UIWindowScene *)arg2;

@end
