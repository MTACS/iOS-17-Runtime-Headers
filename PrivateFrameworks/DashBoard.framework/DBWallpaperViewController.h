
@interface DBWallpaperViewController : UIViewController <BSInvalidatable, FBSceneManagerObserver, FBSceneObserver> {
    DBSceneUpdate * _currentSceneUpdate;
    <DBEnvironment> * _environment;
    bool  _invalidated;
    NSString * _requester;
    FBScene * _scene;
    UIView<UIScenePresentation> * _sceneHostView;
    NSString * _sceneID;
    <UIScenePresenter> * _scenePresenter;
    NSMutableDictionary * _scenePresentersByIdentifier;
    DBApplicationInfo * _wallpaperAppInfo;
}

@property (nonatomic, retain) DBSceneUpdate *currentSceneUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <DBEnvironment> *environment;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, copy) NSString *requester;
@property (nonatomic, retain) FBScene *scene;
@property (nonatomic, retain) UIView<UIScenePresentation> *sceneHostView;
@property (nonatomic, copy) NSString *sceneID;
@property (nonatomic, retain) <UIScenePresenter> *scenePresenter;
@property (nonatomic, retain) NSMutableDictionary *scenePresentersByIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) DBApplicationInfo *wallpaperAppInfo;

- (void).cxx_destruct;
- (void)_sendSceneUpdate;
- (id)currentSceneUpdate;
- (id)environment;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 sceneIdentifier:(id)arg2;
- (void)invalidate;
- (bool)isInvalidated;
- (id)requester;
- (id)scene;
- (id)sceneHostView;
- (id)sceneID;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3;
- (id)scenePresenter;
- (id)scenePresentersByIdentifier;
- (void)setCurrentSceneUpdate:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setRequester:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setSceneHostView:(id)arg1;
- (void)setSceneID:(id)arg1;
- (void)setScenePresenter:(id)arg1;
- (void)setScenePresentersByIdentifier:(id)arg1;
- (void)setWallpaperAppInfo:(id)arg1;
- (void)updateAppearanceForWallpaper;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)wallpaperAppInfo;

@end
