
@protocol SBSystemActionPreviewCoordinating <NSObject>

@required

- (SBUISound *)customSoundForPerformingAction:(SBSystemAction *)arg1;
- (<SBSystemActionPreviewContextProviding> *)previewContextForAction:(SBSystemAction *)arg1;
- (void)provideDiscreteNoActionInteractionFeedback;
- (<SBSystemActionPreviewInvalidatable> *)showPreviewForAction:(SBSystemAction *)arg1 withContext:(id <SBSystemActionPreviewContextProviding>)arg2;
- (SBWindowScene *)windowScene;

@end
