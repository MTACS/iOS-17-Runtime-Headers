
@protocol SBPIPInteractionControllerDataSource <NSObject>

@required

- (double)currentCornerRadiusForInteractionController:(SBPIPInteractionController *)arg1;
- (NSString *)debugName;
- (NSArray *)defaultPositionHyperregionComposers;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })interactionController:(SBPIPInteractionController *)arg1 edgeInsetsForWindowScene:(SBWindowScene *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })interactionController:(SBPIPInteractionController *)arg1 stashedPaddingForWindowScene:(SBWindowScene *)arg2;
- (void)interactionController:(SBPIPInteractionController *)arg1 updateScaleInteractor:(_UIHyperInteractor *)arg2 pipSize:(struct CGSize { double x1; double x2; })arg3 forPanGesture:(UIPanGestureRecognizer *)arg4;
- (NSArray *)interactionControllerConnectedWindowScenes:(SBPIPInteractionController *)arg1;
- (bool)interactionControllerScalesDuringPanGesture:(SBPIPInteractionController *)arg1;
- (SBPIPContentViewLayoutSettings *)layoutSettings;
- (bool)shouldPointerInteractionBeginForInteractionController:(SBPIPInteractionController *)arg1;
- (SBSystemGestureManager *)systemGestureManagerForInteractionControllerResizing:(SBPIPInteractionController *)arg1;
- (SBSystemPointerInteractionManager *)systemPointerInteractionManagerForInteractionController:(SBPIPInteractionController *)arg1;

@optional

- (bool)interactionControllerIsExternalPanGestureRecognizing:(SBPIPInteractionController *)arg1;

@end
