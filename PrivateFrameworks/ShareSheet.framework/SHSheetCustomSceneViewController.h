
@interface SHSheetCustomSceneViewController : UIViewController <FBSceneDelegate> {
    RBSProcessIdentity * _processIdentity;
    FBScene * _scene;
    <UIScenePresenter> * _scenePresenter;
    UIView * _sceneView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RBSProcessIdentity *processIdentity;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) <UIScenePresenter> *scenePresenter;
@property (nonatomic, readonly) UIView *sceneView;
@property (readonly) Class superclass;

+ (id)sceneWorkspace;

- (void).cxx_destruct;
- (void)_setupScene;
- (void)_tearDownScene;
- (void)dealloc;
- (id)initWithProcessIdentity:(id)arg1;
- (id)processIdentity;
- (id)scene;
- (void)scene:(id)arg1 clientDidConnect:(id)arg2;
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;
- (id)scenePresenter;
- (id)sceneView;
- (void)viewDidLayoutSubviews;

@end
