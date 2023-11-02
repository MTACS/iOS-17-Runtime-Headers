
@interface SBModalAlertPresenter : NSObject <BSDescriptionProviding, FBSceneManagerObserver> {
    bool  _invalidated;
    bool  _isSystemPresenter;
    SBModalAlertPresentationCoordinator * _modalAlertPresentationCoordinator;
    FBScene * _scene;
    FBSceneManager * _sceneManager;
    NSHashTable * _visibleAlertAssertions;
    unsigned long long  _visibleModalAlertCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForeground, nonatomic, readonly) bool foreground;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator;
@property (setter=_setScene:, nonatomic, retain) FBScene *scene;
@property (nonatomic, retain) FBSceneManager *sceneManager;
@property (getter=isShowingModalAlert, nonatomic, readonly) bool showingModalAlert;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long visibleModalAlertCount;

- (void).cxx_destruct;
- (void)_addOrRemoveModalAlertPresenterIfNecessary;
- (void)_addOrRemoveModalAlertPresenterIfNecessaryWithForegroundState:(bool)arg1 fromOrToTerminalState:(bool)arg2;
- (id)_initWithModalAlertPresentationCoordinator:(id)arg1 sceneManager:(id)arg2 scene:(id)arg3;
- (void)_setScene:(id)arg1;
- (id)acquireVisibleModalAlertAssertionWithDescription:(id)arg1;
- (void)dealloc;
- (void)decrementVisibleModalAlertCount;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)incrementVisibleModalAlertCount;
- (id)initForSystemApplication;
- (id)initWithScene:(id)arg1;
- (void)invalidate;
- (bool)isForeground;
- (bool)isShowingModalAlert;
- (id)modalAlertPresentationCoordinator;
- (id)scene;
- (id)sceneManager;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)setModalAlertPresentationCoordinator:(id)arg1;
- (void)setSceneManager:(id)arg1;
- (void)setVisibleModalAlertCount:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)visibleModalAlertCount;

@end
