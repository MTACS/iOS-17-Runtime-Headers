
@interface PRXScannerIndicatorView : UIView <CAAnimationDelegate> {
    CAShapeLayer * _borderLayerMask;
    CAShapeLayer * _initialWhiteTintLayer;
    bool  _needsReset;
    CAGradientLayer * _viewFinderBorderLayer;
    CAShapeLayer * _viewFinderTintLayer;
}

@property (nonatomic, readonly) CAShapeLayer *borderLayerMask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CAShapeLayer *initialWhiteTintLayer;
@property (nonatomic) bool needsReset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAGradientLayer *viewFinderBorderLayer;
@property (nonatomic, readonly) CAShapeLayer *viewFinderTintLayer;

+ (double)innerHoleRatio;
+ (double)strokeWidth;

- (void).cxx_destruct;
- (void)animateBorderFrom:(id)arg1 to:(id)arg2 duration:(double)arg3;
- (void)animateInitialIfNeeded;
- (void)animateToColors:(id)arg1 duration:(double)arg2;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)borderLayerMask;
- (void)complete;
- (void)completed;
- (void)configure;
- (id)init;
- (void)initial;
- (id)initialWhiteTintLayer;
- (id)innerHolePathForRatio:(double)arg1 stroke:(double)arg2;
- (void)layoutSubviews;
- (bool)needsReset;
- (void)reset;
- (void)setNeedsReset:(bool)arg1;
- (id)viewFinderBorderLayer;
- (id)viewFinderTintLayer;

@end
