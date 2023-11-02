
@protocol SBScenePlaceholderContentViewProvider <NSObject>

@required

- (<SBScenePlaceholderContentViewProviderDelegate> *)delegate;
- (UIView<SBScenePlaceholderContentView> *)sceneView:(SBSceneView *)arg1 requestsPlaceholderContentViewWithContext:(id <SBScenePlaceholderContentContext>)arg2;
- (void)setDelegate:(id <SBScenePlaceholderContentViewProviderDelegate>)arg1;

@end
