
@interface MagnifierSupport.DetectedPersonView : UIView {
    void _currentTargetPoint;
    void _depthLabel;
    void _depthLabelView;
    void _dottedLineLabel;
    void _nextTargetPoint;
    void _noDetectionLabel;
    void _positionLabel;
    void _previousTargetPoint;
    void _rotationSubscription;
    void _startTargetTime;
    void _targetAnimationDisplayLink;
    void edgeInsets;
    void isCenterDetectionEnabled;
    void isDepthHidden;
    void kDepthLabelViewOpacity;
    void kDimmingFactor;
    void kFirstPointDepth;
    void kNoDetectionFont;
    void kSafeAreaBottom;
    void kSafeAreaLeft;
    void kSafeAreaRight;
    void kSafeAreaTop;
    void kTargetAnimationDuration;
    void kTargetPositionArrayMaxSize;
    void noDetectionMessage;
}

- (void).cxx_destruct;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (id)_accessibilitySupplementaryFooterViews;
- (bool)accessibilityActivate;
- (void)accessibilityElementDidBecomeFocused;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateTargetAnimation;

@end
