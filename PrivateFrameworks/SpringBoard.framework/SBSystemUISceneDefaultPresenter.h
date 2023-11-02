
@interface SBSystemUISceneDefaultPresenter : NSObject <BSDescriptionProviding, SBScenePresenting> {
    <SBSystemUISceneBindingProviding> * _bindingProvider;
    SBTraitsSceneParticipantDelegate * _currentParticipantDelegate;
    NSMutableDictionary * _displayConfigurationToPresentationBinderMap;
    NSNumber * _preferredWindowLevel;
    NSMutableArray * _presentedScenes;
    <SBScenePresentingDelegate> * _presentingDelegate;
    NSMutableDictionary * _sceneToPresentationBinderMap;
    NSMutableDictionary * _sceneToWindowMap;
    FBSDisplayConfiguration * _targetDisplayConfiguration;
    UIWindowScene * _targetWindowScene;
}

@property (nonatomic, readonly) <SBSystemUISceneBindingProviding> *bindingProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *preferredWindowLevel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FBSDisplayConfiguration *targetDisplayConfiguration;
@property (nonatomic, readonly) UIWindowScene *targetWindowScene;

- (void).cxx_destruct;
- (void)_addSceneToPresentationBinder:(id)arg1;
- (id)_initWithPresentationBinderProvider:(id)arg1 targetDisplayConfiguration:(id)arg2;
- (void)_invalidatePresentationBinderForDisplayConfiguration:(id)arg1;
- (id)_presentationBinderForDisplayConfiguration:(id)arg1;
- (void)_removeSceneFromPresentationBinder:(id)arg1;
- (id)bindingProvider;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dismissScene:(id)arg1;
- (id)hostingBinderForScene:(id)arg1;
- (id)hostingWindowForScene:(id)arg1;
- (id)init;
- (id)initWithPresentationBinderProvider:(id)arg1;
- (id)initWithPresentationBinderProvider:(id)arg1 targetDisplayConfiguration:(id)arg2;
- (id)initWithTargetDisplayConfiguration:(id)arg1;
- (id)initWithWindowHostingPresentationOnWindowScene:(id)arg1;
- (id)preferredWindowLevel;
- (id)presentScene:(id)arg1 viewControllerBuilderBlock:(id /* block */)arg2;
- (void)scene:(id)arg1 didChangeTraitsParticipantDelegate:(id)arg2;
- (void)scene:(id)arg1 hasVisibleContent:(bool)arg2;
- (void)sceneDidChangeDisplayIdentity:(id)arg1;
- (void)setPreferredWindowLevel:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)targetDisplayConfiguration;
- (id)targetWindowScene;

@end
