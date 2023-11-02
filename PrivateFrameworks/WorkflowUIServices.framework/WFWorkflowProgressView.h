
@interface WFWorkflowProgressView : UIControl {
    CAShapeLayer * _backgroundCircleLayer;
    UIImageView * _completedContainerView;
    long long  _currentState;
    UIImpactFeedbackGenerator * _feedbackGenerator;
    double  _fractionCompleted;
    CAShapeLayer * _partialRingLayer;
    double  _progressStrokeWidth;
    UIColor * _resolvedTintColor;
    CALayer * _runningContainerLayer;
    CAShapeLayer * _stopGlyphLayer;
    double  _stopSize;
}

@property (nonatomic, readonly) CAShapeLayer *backgroundCircleLayer;
@property (nonatomic, readonly) UIImageView *completedContainerView;
@property (nonatomic) long long currentState;
@property (nonatomic, readonly) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) double fractionCompleted;
@property (nonatomic, readonly) CAShapeLayer *partialRingLayer;
@property (nonatomic) double progressStrokeWidth;
@property (nonatomic, retain) UIColor *resolvedTintColor;
@property (nonatomic, readonly) CALayer *runningContainerLayer;
@property (nonatomic, readonly) CAShapeLayer *stopGlyphLayer;
@property (nonatomic) double stopSize;

- (void).cxx_destruct;
- (id)backgroundCircleLayer;
- (void)beginBreatheAnimation;
- (id)completedContainerView;
- (long long)currentState;
- (void)endBreatheAnimation;
- (id)feedbackGenerator;
- (double)fractionCompleted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)partialRingLayer;
- (void)popCompletedCheckmark;
- (void)popCompletedCheckmarkWithHaptic:(bool)arg1;
- (double)progressStrokeWidth;
- (void)reset;
- (id)resolvedTintColor;
- (id)runningContainerLayer;
- (void)setCurrentState:(long long)arg1;
- (void)setFractionCompleted:(double)arg1;
- (void)setProgressStrokeWidth:(double)arg1;
- (void)setResolvedTintColor:(id)arg1;
- (void)setStopSize:(double)arg1;
- (id)stopGlyphLayer;
- (double)stopSize;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transitionCompletedLayerToVisible:(bool)arg1 animated:(bool)arg2 haptic:(bool)arg3;
- (void)transitionRunningLayerToVisible:(bool)arg1 animated:(bool)arg2;
- (void)transitionToState:(long long)arg1;
- (void)transitionToState:(long long)arg1 animated:(bool)arg2;
- (void)updatePaths;

@end
