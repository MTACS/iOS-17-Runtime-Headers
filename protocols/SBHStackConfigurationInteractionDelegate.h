
@protocol SBHStackConfigurationInteractionDelegate <NSObject>

@required

- (UIView<SBIconDragPreview> *)stackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 dragPreviewForIconView:(SBIconView *)arg2;
- (SBIcon *)stackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 draggedIconForIdentifier:(NSString *)arg2;
- (void)stackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 isConsumingDropSession:(id <UIDropSession>)arg2;
- (void)stackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 noteDidRemoveSuggestedWidgetIcon:(SBWidgetIcon *)arg2;
- (<SBLeafIconDataSource> *)stackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 promoteSuggestedWidget:(id <SBLeafIconDataSource>)arg2 withinStack:(SBWidgetIcon *)arg3;
- (void)stackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 requestsPresentAddWidgetSheetFromPresenter:(UIViewController<SBHWidgetSheetViewControllerPresenter> *)arg2;
- (void)stackConfigurationInteractionWillAnimateWidgetInsertion:(SBHStackConfigurationInteraction *)arg1;
- (UIWindow<SBIconDragPreviewContaining> *)windowForIconDragPreviewsForStackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 forWindowScene:(UIWindowScene *)arg2;

@optional

- (void)stackConfigurationDoneButtonTapped:(SBHStackConfigurationInteraction *)arg1;
- (bool)stackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 allowsRemovalOfIconDataSource:(id <SBLeafIconDataSource>)arg2;
- (bool)stackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 dragsSupportSystemDragsForIconView:(SBIconView *)arg2;
- (double)stackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 iconContentScaleForGridSizeClass:(unsigned long long)arg2;
- (void)stackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 iconView:(SBIconView *)arg2 dragLiftAnimationDidChangeDirection:(long long)arg3;
- (void)stackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 iconView:(SBIconView *)arg2 willAnimateDragLiftWithAnimator:(id <UIDragAnimating>)arg3 session:(id <UIDragSession>)arg4;
- (UITargetedDragPreview *)stackConfigurationInteraction:(SBHStackConfigurationInteraction *)arg1 targetedDragPreviewForIconView:(SBIconView *)arg2 item:(UIDragItem *)arg3 session:(id <UIDragSession>)arg4 previewParameters:(UIDragPreviewParameters *)arg5;
- (void)stackConfigurationInteractionDidReceiveUserTouch:(SBHStackConfigurationInteraction *)arg1;
- (long long)stackConfigurationInteractionIconViewComponentBackgroundViewType:(SBHStackConfigurationInteraction *)arg1;

@end
