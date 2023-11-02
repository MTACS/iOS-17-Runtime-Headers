
@protocol _UIForcePresentationControllerDelegate <NSObject>

@optional

- (void)forcePresentationController:(UIPresentationController<UIForcePresentationController> *)arg1 didSelectMenuItem:(UIPreviewMenuItem *)arg2;
- (void)forcePresentationControllerDidDismiss:(UIPresentationController<UIForcePresentationController> *)arg1;
- (void)forcePresentationControllerWantsToCommit:(UIPresentationController<UIForcePresentationController> *)arg1;
- (void)forcePresentationControllerWillDismiss:(UIPresentationController<UIForcePresentationController> *)arg1;
- (void)forcePresentationTransitionWillBegin:(NSObject<UIForcePresentationController> *)arg1;

@end
