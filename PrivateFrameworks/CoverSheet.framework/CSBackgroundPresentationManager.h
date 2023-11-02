
@interface CSBackgroundPresentationManager : NSObject {
    FBScene * _currentScene;
    BLSHGenericSceneDelegateWithActionHandlers * _sceneDelegate;
    <UIScenePresenter> * _scenePresenter;
    FBSceneWorkspace * _sceneWorkspace;
}

@property (nonatomic, readonly) FBScene *currentScene;
@property (nonatomic, readonly) BLSHGenericSceneDelegateWithActionHandlers *sceneDelegate;
@property (nonatomic, readonly) <UIScenePresenter> *scenePresenter;
@property (nonatomic, readonly) FBSceneWorkspace *sceneWorkspace;

- (void).cxx_destruct;
- (id)createBackgroundViewControllerForDefinition:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)currentScene;
- (void)dealloc;
- (id)init;
- (id)sceneDelegate;
- (id)scenePresenter;
- (id)sceneWorkspace;

@end
