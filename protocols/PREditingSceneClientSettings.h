
@protocol PREditingSceneClientSettings <PRSceneClientSettings>

@required

- (bool)pr_areContentsCoveredByModalPresentation;
- (bool)pr_hasBackgroundTasks;
- (bool)pr_isEditingFocusActive;

@end
