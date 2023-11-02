
@interface PXNumberAnimator : PXObservable <PXMutableNumberAnimator, PXNumberAnimatorDisplayLinkTarget> {
    NSMutableArray * _animations;
    struct _PXValueAnimationSpec { 
        long long type; 
        double duration; 
        long long curve; 
        double epsilon; 
        double stiffness; 
        double dampingRatio; 
        double initialVelocity; 
    }  _currentAnimationSpec;
    double  _currentTime;
    PXDisplayLink * _displayLink;
    <PXNumberAnimatorDisplayLinkTarget> * _displayLinkTarget;
    double  _epsilon;
    unsigned int  _highFrameRateReason;
    bool  _isBeingMutated;
    bool  _isPerformingChanges;
    NSString * _label;
    struct { 
        bool presentationValue; 
    }  _needsUpdateFlags;
    double  _presentationValue;
    bool  _skipFirstNumberWhenAnimationStart;
    double  _value;
}

@property (nonatomic, readonly) double approximateVelocity;
@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXNumberAnimatorDisplayLinkTarget> *displayLinkTarget;
@property (nonatomic, readonly) double epsilon;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic, readonly) bool isAnimating;
@property (nonatomic, readonly) bool isBeingMutated;
@property (nonatomic, copy) NSString *label;
@property (setter=_setPresentationValue:, nonatomic) double presentationValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double value;

- (void).cxx_destruct;
- (void)_invalidatePresentationValue;
- (bool)_needsUpdate;
- (void)_setAnimating:(bool)arg1;
- (void)_setAnimating:(bool)arg1 deferredStart:(bool)arg2;
- (void)_setNeedsUpdate;
- (void)_setPresentationValue:(double)arg1;
- (void)_updateIfNeeded;
- (void)_updatePresentationValueIfNeeded;
- (double)approximateVelocity;
- (double)currentTime;
- (id)description;
- (void)didPerformChanges;
- (id)displayLinkTarget;
- (double)epsilon;
- (void)handleDisplayLink:(id)arg1;
- (unsigned int)highFrameRateReason;
- (id)init;
- (id)initWithValue:(double)arg1;
- (id)initWithValue:(double)arg1 epsilon:(double)arg2;
- (bool)isAnimating;
- (bool)isBeingMutated;
- (id)label;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(double)arg1 changes:(id /* block */)arg2;
- (void)performChangesUsingSpringAnimationWithStiffness:(double)arg1 dampingRatio:(double)arg2 initialVelocity:(double)arg3 changes:(id /* block */)arg4;
- (void)performChangesWithDuration:(double)arg1 curve:(long long)arg2 changes:(id /* block */)arg3;
- (void)performChangesWithoutAnimation:(id /* block */)arg1;
- (double)presentationValue;
- (void)setDisplayLinkTarget:(id)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setLabel:(id)arg1;
- (void)setValue:(double)arg1;
- (void)setValue:(double)arg1 skipFirstNumberWhenAnimationStart:(bool)arg2;
- (double)value;

@end
