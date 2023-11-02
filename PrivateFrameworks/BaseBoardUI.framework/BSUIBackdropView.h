
@interface BSUIBackdropView : _UIBackdropView {
    double  _finalScale;
    double  _initialScale;
    double  _rasterizationScale;
    double  _scaleForNoBlur;
    double  _transitionProgress;
}

@property (nonatomic) double rasterizationScale;
@property (nonatomic) double scaleForNoBlur;

- (void)applySettings:(id)arg1;
- (double)rasterizationScale;
- (double)scaleForNoBlur;
- (void)setRasterizationScale:(double)arg1;
- (void)setScaleForNoBlur:(double)arg1;
- (void)transitionComplete;
- (void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2;

@end
