
@interface UIRootSceneWindow : _UIRootWindow <UIMutableTransformerDelegate> {
    FBSDisplayConfiguration * _displayConfiguration;
    UIView * _sceneContainerView;
    UIMutableTransformer * _sceneTransformer;
}

@property (nonatomic, readonly) UIView *_sceneContainerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIMutableTransformer *sceneTransformer;
@property (readonly) Class superclass;

+ (bool)_isSecure;

- (void).cxx_destruct;
- (bool)_appearsInLoupe;
- (id)_focusResponder;
- (id)_sceneContainerView;
- (bool)_shouldPrepareScreenForWindow;
- (void)_updateTransforms;
- (bool)_usesWindowServerHitTesting;
- (bool)canBecomeKeyWindow;
- (void)dealloc;
- (id)displayConfiguration;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithDisplay:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (id)sceneTransformer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)transformsDidChange:(id)arg1;

@end
