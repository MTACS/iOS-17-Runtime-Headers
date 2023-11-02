
@interface PBFGalleryPosterViewController : UIViewController <BSInvalidatable, _PBFPosterSceneSnapshotViewControllerDelegate> {
    PBFPosterSnapshotDefinition * _definition;
    <PBFGalleryPosterViewControllerDelegate> * _delegate;
    <PBFDisplayContext> * _displayContext;
    <PRSPosterExtensionDescribing> * _extension;
    bool  _isInvalidated;
    RBSAssertion * _posterRuntimeAssertion;
    <PBFPosterPreview> * _preview;
    _PBFPosterSceneSnapshotViewController * _sceneViewController;
    UIView * _transformView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) PBFPosterSnapshotDefinition *definition;
@property (nonatomic) <PBFGalleryPosterViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <PBFDisplayContext> *displayContext;
@property (nonatomic, readonly) <PRSPosterExtensionDescribing> *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PBFPosterPreview> *preview;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupSceneViewController;
- (void)_updateSceneViewController;
- (id)definition;
- (id)delegate;
- (id)displayContext;
- (id)extension;
- (id)initWithExtension:(id)arg1 preview:(id)arg2 definition:(id)arg3;
- (void)invalidate;
- (id)preview;
- (void)sceneSnapshotViewController:(id)arg1 stateChangedTo:(long long)arg2;
- (void)sceneSnapshotViewController:(id)arg1 stateWillChangeFrom:(long long)arg2 to:(long long)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDisplayContext:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (long long)state;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
