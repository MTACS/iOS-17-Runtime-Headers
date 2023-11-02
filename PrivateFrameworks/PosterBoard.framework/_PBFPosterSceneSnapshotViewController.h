
@interface _PBFPosterSceneSnapshotViewController : PRRenderingSceneViewController {
    PBFPosterSnapshotDefinition * _definition;
    <_PBFPosterSceneSnapshotViewControllerDelegate> * _delegate;
    <PBFDisplayContext> * _displayContext;
    <PRSPosterExtensionDescribing> * _extension;
    <PBFPosterPreview> * _preview;
    bool  _scenePresenterIsValid;
    long long  _state;
}

@property (nonatomic, readonly) PBFPosterSnapshotDefinition *definition;
@property (nonatomic) <_PBFPosterSceneSnapshotViewControllerDelegate> *delegate;
@property (nonatomic, retain) <PBFDisplayContext> *displayContext;
@property (nonatomic, readonly) <PRSPosterExtensionDescribing> *extension;
@property (nonatomic, readonly) <PBFPosterPreview> *preview;
@property (nonatomic) bool scenePresenterIsValid;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_configureInitialSceneSettings:(id)arg1;
- (void)_failWithFatalError:(id)arg1;
- (void)_myUpdateSettings:(id)arg1;
- (void)_sceneContentReadinessDidChange;
- (void)_teardown;
- (void)_updateSceneSettings:(id)arg1 transitionContext:(id)arg2;
- (id)definition;
- (id)delegate;
- (id)displayContext;
- (id)extension;
- (id)initWithProvider:(id)arg1 contents:(id)arg2 configurableOptions:(id)arg3 configuredProperties:(id)arg4 preview:(id)arg5 definition:(id)arg6;
- (void)invalidate;
- (id)preview;
- (bool)scenePresenterIsValid;
- (void)setDelegate:(id)arg1;
- (void)setDisplayContext:(id)arg1;
- (void)setScenePresenterIsValid:(bool)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
