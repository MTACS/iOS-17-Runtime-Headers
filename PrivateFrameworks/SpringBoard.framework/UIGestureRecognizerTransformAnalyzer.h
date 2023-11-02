
@interface UIGestureRecognizerTransformAnalyzer : NSObject {
    int  _dominantComponent;
    double  _pinchingWeight;
    double  _rotationWeight;
    UIGestureRecognizerTransformAnalyzerInfo * _smoothedInfo;
    double  _translationWeight;
}

@property (nonatomic, readonly) int dominantComponent;
@property (nonatomic) double pinchingWeight;
@property (nonatomic) double rotationWeight;
@property (nonatomic, readonly) UIGestureRecognizerTransformAnalyzerInfo *smoothedInfo;
@property (nonatomic) double translationWeight;

- (void).cxx_destruct;
- (id)analyzeTouches:(id)arg1;
- (int)dominantComponent;
- (id)init;
- (double)pinchingWeight;
- (void)reset;
- (double)rotationWeight;
- (void)setPinchingWeight:(double)arg1;
- (void)setRotationWeight:(double)arg1;
- (void)setTranslationWeight:(double)arg1;
- (id)smoothedInfo;
- (double)translationWeight;

@end
