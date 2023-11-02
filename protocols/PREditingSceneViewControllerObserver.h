
@protocol PREditingSceneViewControllerObserver <NSObject>

@optional

- (void)editingSceneViewControllerDidFinalize:(PREditingSceneViewController *)arg1;
- (void)editingSceneViewControllerDidFinishShowingContent:(PREditingSceneViewController *)arg1;

@end
