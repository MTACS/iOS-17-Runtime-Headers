
@interface _UISceneLayerHostView : _UIDirectionalRotationView {
    UIScenePresentationContext * _currentPresentationContext;
    bool  _inheritsSecurity;
    UIScenePresentationContext * _presentationContext;
    bool  _resizesHostedContext;
    FBSceneLayer * _sceneLayer;
    bool  _stopsHitTestTransformAccumulation;
    UITransformer * _transformer;
}

@property (nonatomic, retain) UIScenePresentationContext *currentPresentationContext;
@property (nonatomic) bool inheritsSecurity;
@property (nonatomic) bool resizesHostedContext;
@property (nonatomic, readonly) FBSceneLayer *sceneLayer;
@property (nonatomic) bool stopsHitTestTransformAccumulation;
@property (nonatomic, retain) UITransformer *transformer;

- (void).cxx_destruct;
- (id)currentPresentationContext;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)inheritsSecurity;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSceneLayer:(id)arg1;
- (bool)resizesHostedContext;
- (id)sceneLayer;
- (void)setCurrentPresentationContext:(id)arg1;
- (void)setInheritsSecurity:(bool)arg1;
- (void)setResizesHostedContext:(bool)arg1;
- (void)setStopsHitTestTransformAccumulation:(bool)arg1;
- (void)setTransformer:(id)arg1;
- (bool)stopsHitTestTransformAccumulation;
- (id)transformer;

@end
