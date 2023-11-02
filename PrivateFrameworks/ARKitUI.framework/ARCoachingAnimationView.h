
@interface ARCoachingAnimationView : UIView <ARCoachingUpdateManagerDelegate> {
    long long  _animationState;
    float  _cubeAngle;
    long long  _currentCoachingGoal;
    bool  _isDeactivating;
    bool  _isRotating;
    void _lastCameraRight;
    void _lastCameraTranslation;
    long long  _lastUpdateState;
    CAMetalLayer * _metalLayer;
    double  _nextStateTime;
    <ARCoachingRenderer> * _renderer;
    void _rotationStartCameraRight;
    void _rotationStartCameraTranslation;
    ARCoachingUpdateManager * _updateManager;
    bool  _wasRotating;
}

@property (nonatomic) long long animationState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDeactivating;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)animationState;
- (double)calcNextAnimationSwitchTime:(double)arg1 forState:(unsigned long long)arg2;
- (void)clampCubeToQuarterRotation;
- (void)drawInDrawable:(id)arg1 withCommandBuffer:(id)arg2 timeDelta:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDeactivating;
- (void)killCoachingAnimation;
- (void)layoutSubviews;
- (void)orientationChanged;
- (void)resizeForDrawable:(id)arg1;
- (void)setAnimationState:(long long)arg1;
- (void)setIsDeactivating:(bool)arg1;
- (void)setupView;
- (void)startCoachingAnimation:(long long)arg1;
- (void)updateAlternatingPlanes:(double)arg1;
- (void)updateCubeRotation:(id)arg1 motionTracker:(id)arg2;
- (void)updateForCurrentTime:(double)arg1 timeDelta:(double)arg2;
- (void)updateMetalLayer;
- (void)updateVerticalClamp:(double)arg1;
- (void)updateWithFrame:(id)arg1 motionTracker:(id)arg2;

@end
