
@interface FMFAnnotationView : FMAnnotationView {
    CAShapeLayer * _accuracyLayer;
    CAShapeLayer * _largePulseLayer;
    double  _lastAccuracyRadius;
    CAShapeLayer * _smallPulseLayer;
    CALayer * _stewieLargeBadgeLayer;
    CALayer * _stewieSmallBadgeLayer;
}

@property (nonatomic, retain) CAShapeLayer *accuracyLayer;
@property (nonatomic) bool isLiveAnimated;
@property (nonatomic, retain) CAShapeLayer *largePulseLayer;
@property (nonatomic) double lastAccuracyRadius;
@property (nonatomic, retain) CAShapeLayer *smallPulseLayer;
@property (nonatomic, retain) CALayer *stewieLargeBadgeLayer;
@property (nonatomic, retain) CALayer *stewieSmallBadgeLayer;

- (void).cxx_destruct;
- (id)accuracyLayer;
- (id)buildAccuracyLayer;
- (id)buildPulseLayerWithDiameter:(double)arg1 centeredInParentLayer:(id)arg2;
- (id)buildStewieLayerWithDiameter:(double)arg1 image:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 offsetInParentLayer:(id)arg4 by:(struct CGPoint { double x1; double x2; })arg5;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3;
- (bool)isLiveAnimated;
- (id)largePulseLayer;
- (double)lastAccuracyRadius;
- (void)setAccuracyLayer:(id)arg1;
- (void)setIsLiveAnimated:(bool)arg1;
- (void)setLargePulseLayer:(id)arg1;
- (void)setLastAccuracyRadius:(double)arg1;
- (void)setSmallPulseLayer:(id)arg1;
- (void)setStewieLargeBadgeLayer:(id)arg1;
- (void)setStewieSmallBadgeLayer:(id)arg1;
- (id)smallPulseLayer;
- (void)startLiveAnimation;
- (id)stewieLargeBadgeLayer;
- (id)stewieSmallBadgeLayer;
- (void)stopLiveAnimation;
- (void)updateWithLocation:(id)arg1;

@end
