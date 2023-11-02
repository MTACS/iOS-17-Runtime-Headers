
@interface PPLPeopleEntityViewController : UIViewController <PPLPeopleAppSceneRequester> {
    <PPLPeopleEntityViewControllerDelegate> * _delegate;
    UIView<UIScenePresentation> * _hostView;
    PPLPeopleEntityMetadata * _metadata;
    <UIScenePresenter> * _presenter;
    FBScene * _scene;
    PPLPeopleAppSceneManager * _sceneManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PPLPeopleEntityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView<UIScenePresentation> *hostView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialSceneFrame;
@property (nonatomic, retain) PPLPeopleEntityMetadata *metadata;
@property (nonatomic, readonly) NSURL *personURL;
@property (nonatomic, retain) <UIScenePresenter> *presenter;
@property (nonatomic, retain) FBScene *scene;
@property (nonatomic, readonly) PPLPeopleAppSceneManager *sceneManager;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sceneSafeAreaInsetPortrait;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)hostView;
- (id)initWithMetadata:(id)arg1;
- (id)initWithMetadata:(id)arg1 sceneManager:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialSceneFrame;
- (id)metadata;
- (id)personURL;
- (id)presenter;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetFromSceneSettings:(id)arg1;
- (id)scene;
- (id)sceneManager;
- (void)sceneManager:(id)arg1 didGrantOwnershipOfScene:(id)arg2;
- (void)sceneManager:(id)arg1 didRevokeOwnershipOfScene:(id)arg2;
- (void)sceneManager:(id)arg1 sceneDidRequestDismissal:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sceneSafeAreaInsetPortrait;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sceneSettingsFrameFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostView:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setScene:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
