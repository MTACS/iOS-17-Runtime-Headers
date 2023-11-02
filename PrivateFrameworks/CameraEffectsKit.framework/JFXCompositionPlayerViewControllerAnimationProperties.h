
@interface JFXCompositionPlayerViewControllerAnimationProperties : NSObject {
    double  _animationDuration;
    bool  _shouldScale;
    <UITimingCurveProvider> * _timingParameters;
}

@property (nonatomic) double animationDuration;
@property (nonatomic) bool shouldScale;
@property (nonatomic, retain) <UITimingCurveProvider> *timingParameters;

- (void).cxx_destruct;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (void)setShouldScale:(bool)arg1;
- (void)setTimingParameters:(id)arg1;
- (bool)shouldScale;
- (id)timingParameters;

@end
