
@interface SBWorkspaceTransientOverlayTransitionContext : SBWorkspaceTransitionContext {
    bool  _animated;
    BSProcessHandle * _originatingProcess;
    SBTransientOverlayPresentationManager * _presentationManager;
    <SBTransientOverlayPresenting> * _scenePresenter;
    bool  _shouldDismissSiriUponPresentation;
    bool  _shouldPreserveAppSwitcher;
    SBWorkspaceTransientOverlay * _transientOverlay;
    long long  _transitionType;
    SBWindowScene * _windowScene;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (nonatomic, retain) BSProcessHandle *originatingProcess;
@property (nonatomic, retain) SBTransientOverlayPresentationManager *presentationManager;
@property (nonatomic, retain) <SBTransientOverlayPresenting> *scenePresenter;
@property (nonatomic) bool shouldDismissSiriUponPresentation;
@property (nonatomic) bool shouldPreserveAppSwitcher;
@property (nonatomic, retain) SBWorkspaceTransientOverlay *transientOverlay;
@property (nonatomic) long long transitionType;
@property (nonatomic) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)init;
- (bool)isAnimated;
- (id)originatingProcess;
- (id)presentationManager;
- (id)scenePresenter;
- (void)setAnimated:(bool)arg1;
- (void)setOriginatingProcess:(id)arg1;
- (void)setPresentationManager:(id)arg1;
- (void)setScenePresenter:(id)arg1;
- (void)setShouldDismissSiriUponPresentation:(bool)arg1;
- (void)setShouldPreserveAppSwitcher:(bool)arg1;
- (void)setTransientOverlay:(id)arg1;
- (void)setTransitionType:(long long)arg1;
- (void)setWindowScene:(id)arg1;
- (bool)shouldDismissSiriUponPresentation;
- (bool)shouldPreserveAppSwitcher;
- (id)transientOverlay;
- (long long)transitionType;
- (id)windowScene;

@end
