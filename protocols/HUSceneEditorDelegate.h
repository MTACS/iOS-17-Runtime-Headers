
@protocol HUSceneEditorDelegate <NSObject>

@optional

- (void)sceneEditor:(UIViewController *)arg1 didCommitActionSet:(HFActionSetBuilder *)arg2;
- (void)sceneEditor:(UIViewController *)arg1 removeActionSetBuilderFromTrigger:(HFActionSetBuilder *)arg2;

@end
