
@interface JFXOverlayEffectAnimationView : UIView {
    CALayer * _additionalTransformLayer;
    JFXEffectAnimationDelegate * _animationDelegate;
    CALayer * _cameraTransformLayer;
    JFXOverlayEffectFrame * _fromEffectFrame;
    JFXOverlayEffectFrame * _toEffectFrame;
    CALayer * _trackingTransformLayer;
    CALayer * _transformLayer;
}

@property (nonatomic, retain) CALayer *additionalTransformLayer;
@property (nonatomic, retain) JFXEffectAnimationDelegate *animationDelegate;
@property (nonatomic, retain) CALayer *cameraTransformLayer;
@property (nonatomic, readonly) JFXOverlayEffectTransforms *currentEffectTransforms;
@property (nonatomic, readonly) double fractionComplete;
@property (nonatomic, retain) JFXOverlayEffectFrame *fromEffectFrame;
@property (nonatomic, retain) JFXOverlayEffectFrame *toEffectFrame;
@property (nonatomic, retain) CALayer *trackingTransformLayer;
@property (nonatomic, retain) CALayer *transformLayer;

- (void).cxx_destruct;
- (id)additionalTransformLayer;
- (void)animate:(id)arg1 completion:(id /* block */)arg2;
- (id)animationDelegate;
- (id)cameraTransformLayer;
- (id)currentEffectTransforms;
- (double)fractionComplete;
- (id)fromEffectFrame;
- (id)initWithEffectFrame:(id)arg1 toEffectFrame:(id)arg2;
- (void)setAdditionalTransformLayer:(id)arg1;
- (void)setAnimationDelegate:(id)arg1;
- (void)setCameraTransformLayer:(id)arg1;
- (void)setFromEffectFrame:(id)arg1;
- (void)setToEffectFrame:(id)arg1;
- (void)setTrackingTransformLayer:(id)arg1;
- (void)setTransformLayer:(id)arg1;
- (id)toEffectFrame;
- (id)trackingTransformLayer;
- (id)transformLayer;

@end
