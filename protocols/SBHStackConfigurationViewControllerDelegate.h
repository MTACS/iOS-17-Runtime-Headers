
@protocol SBHStackConfigurationViewControllerDelegate <NSObject>

@required

- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 didCommitStackConfiguration:(SBHStackConfiguration *)arg2;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 didRemoveSuggestedWidgetIcon:(SBWidgetIcon *)arg2;
- (UIView<SBIconDragPreview> *)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 dragPreviewForIconView:(SBIconView *)arg2;
- (SBIcon *)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 draggedIconForIdentifier:(NSString *)arg2;
- (double)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 iconContentScaleForGridSizeClass:(unsigned long long)arg2;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 isConsumingDropSession:(id <UIDropSession>)arg2;
- (<SBLeafIconDataSource> *)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 promoteSuggestedWidget:(id <SBLeafIconDataSource>)arg2 withinStack:(SBWidgetIcon *)arg3;
- (void)stackConfigurationViewControllerRequestsDismissal:(SBHStackConfigurationViewController *)arg1;
- (void)stackConfigurationViewControllerRequestsPresentAddWidgetSheet:(SBHStackConfigurationViewController *)arg1;
- (void)stackConfigurationViewControllerWillAnimateWidgetInsertion:(SBHStackConfigurationViewController *)arg1;
- (UIWindow<SBIconDragPreviewContaining> *)windowForIconDragPreviewsForStackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 forWindowScene:(UIWindowScene *)arg2;

@optional

- (bool)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 allowsRemovalOfIconDataSource:(id <SBLeafIconDataSource>)arg2;
- (bool)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 dragsSupportSystemDragsForIconView:(SBIconView *)arg2;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 iconView:(SBIconView *)arg2 dragLiftAnimationDidChangeDirection:(long long)arg3;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 iconView:(SBIconView *)arg2 willAnimateDragLiftWithAnimator:(id <UIDragAnimating>)arg3 session:(id <UIDragSession>)arg4;
- (UITargetedDragPreview *)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 targetedDragPreviewForIconView:(SBIconView *)arg2 item:(UIDragItem *)arg3 session:(id <UIDragSession>)arg4 previewParameters:(UIDragPreviewParameters *)arg5;
- (void)stackConfigurationViewControllerDidReceiveUserTouch:(SBHStackConfigurationViewController *)arg1;
- (void)stackConfigurationViewControllerDoneButtonTapped:(SBHStackConfigurationViewController *)arg1;
- (long long)stackConfigurationViewControllerIconViewComponentBackgroundViewType:(SBHStackConfigurationViewController *)arg1;

@end
