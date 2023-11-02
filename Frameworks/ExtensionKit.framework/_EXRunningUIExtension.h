
@interface _EXRunningUIExtension : _EXRunningExtension {
    <_EXExtensionSceneFactory> * _sceneFactory;
}

@property (nonatomic, retain) <_EXExtensionSceneFactory> *sceneFactory;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)checkIn;
- (id)containingViewControllerClassNameForViewServiceSessionManager:(id)arg1;
- (void)installRunloopObserverToPingLaunchdAfterEvent;
- (bool)isExtensionViewServiceSessionManager:(id)arg1;
- (id)mainStoryboardNameForViewServiceSessionManager:(id)arg1;
- (bool)requiresExtensionContextForViewServiceSessionManager:(id)arg1;
- (id)sceneFactory;
- (void)setSceneFactory:(id)arg1;
- (id)viewControllerClassNameForViewServiceSessionManager:(id)arg1;
- (void)viewServiceSessionManager:(id)arg1 didCreateViewController:(id)arg2 contextToken:(id)arg3;

@end
