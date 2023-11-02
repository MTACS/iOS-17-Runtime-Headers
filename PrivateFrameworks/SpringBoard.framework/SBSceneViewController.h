
@interface SBSceneViewController : UIViewController <SBSceneViewControlling, SBSceneViewPresentationConfiguring> {
    long long  _containerOrientation;
    long long  _contentOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentReferenceSize;
    UIView * _customContentView;
    long long  _displayMode;
    <SBScenePlaceholderContentContext> * _placeholderContentContext;
    SBSceneHandle * _sceneHandle;
    SBSceneView * _sceneView;
}

@property (nonatomic, readonly) long long containerOrientation;
@property (nonatomic, readonly) long long contentOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentReferenceSize;
@property (nonatomic, retain) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBScenePlaceholderContentContext> *placeholderContentContext;
@property (nonatomic, readonly) SBSceneHandle *sceneHandle;
@property (getter=_sceneView, nonatomic, readonly) SBSceneView *sceneView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_sceneView;
- (void)_setSceneView:(id)arg1;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (long long)containerOrientation;
- (long long)contentOrientation;
- (struct CGSize { double x1; double x2; })contentReferenceSize;
- (id)customContentView;
- (void)dealloc;
- (long long)displayMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSceneHandle:(id)arg1;
- (void)invalidate;
- (id)newSnapshot;
- (id)newSnapshotView;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)placeholderContentContext;
- (id)sceneHandle;
- (id)sceneViewPresentationIdentifier:(id)arg1;
- (long long)sceneViewPresentationPriority:(id)arg1;
- (void)setContentReferenceSize:(struct CGSize { double x1; double x2; })arg1 withContentOrientation:(long long)arg2 andContainerOrientation:(long long)arg3;
- (void)setCustomContentView:(id)arg1;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(id /* block */)arg3;
- (void)setPlaceholderContentContext:(id)arg1;
- (void)viewDidLoad;

@end
