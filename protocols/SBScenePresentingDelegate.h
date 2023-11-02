
@protocol SBScenePresentingDelegate <NSObject>

@required

- (void)scenePresenterVisibilityDidChange:(id <SBScenePresenting>)arg1;

@optional

- (void)scenePresenter:(id <SBScenePresenting>)arg1 didPresentScene:(FBScene *)arg2;
- (void)scenePresenter:(id <SBScenePresenting>)arg1 willDismissScene:(FBScene *)arg2;

@end
