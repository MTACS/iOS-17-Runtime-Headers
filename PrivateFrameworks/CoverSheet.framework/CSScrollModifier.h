
@interface CSScrollModifier : NSObject <BSUIScrollViewDelegate, PTSettingsKeyObserver> {
    double  _accumulatedDrag;
    double  _accumulatedDragThresholdPercentage;
    bool  _cancelScrollingIfTooMuchDrag;
    bool  _cancelled;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstLocation;
    bool  _hasDraggedSinceReset;
    double  _inertialMultiplier;
    double  _inertialMultiplierSigmoidAlpha;
    double  _inertialMultiplierSigmoidBase;
    double  _inertialMultiplierSigmoidPivot;
    double  _inertialMultiplierSigmoidRange;
    double  _initialScrollViewOffsetX;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastLocation;
    double  _maxAccumulatedDragThreshold;
    double  _maxDragFromVerticalPerFrame;
    double  _maxScrollDistance;
    double  _minPercentageSigmoidAlpha;
    double  _minPercentageSigmoidBase;
    double  _minPercentageSigmoidPivot;
    double  _minPercentageSigmoidRange;
    double  _minSwipePercentageOfScreen;
    double  _powerOfVerticalDirectionSine2;
    bool  _recognized;
    UIView * _targetView;
}

@property (nonatomic) double accumulatedDragThresholdPercentage;
@property (nonatomic) bool cancelScrollingIfTooMuchDrag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double inertialMultiplierSigmoidAlpha;
@property (nonatomic) double inertialMultiplierSigmoidBase;
@property (nonatomic) double inertialMultiplierSigmoidPivot;
@property (nonatomic) double inertialMultiplierSigmoidRange;
@property (nonatomic) double maxDragFromVerticalPerFrame;
@property (nonatomic) double maxScrollDistance;
@property (nonatomic) double minPercentageSigmoidAlpha;
@property (nonatomic) double minPercentageSigmoidBase;
@property (nonatomic) double minPercentageSigmoidPivot;
@property (nonatomic) double minPercentageSigmoidRange;
@property (nonatomic) double powerOfVerticalDirectionSine2;
@property (nonatomic, readonly) bool recognized;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_horizontalProgressSubtractionFromVertical:(struct CGPoint { double x1; double x2; })arg1;
- (void)_loadFromSettings:(id)arg1;
- (void)_updateScrollParameters;
- (double)accumulatedDragThresholdPercentage;
- (bool)cancelScrollingIfTooMuchDrag;
- (void)dealloc;
- (double)inertialMultiplierSigmoidAlpha;
- (double)inertialMultiplierSigmoidBase;
- (double)inertialMultiplierSigmoidPivot;
- (double)inertialMultiplierSigmoidRange;
- (id)initWithView:(id)arg1;
- (double)maxDragFromVerticalPerFrame;
- (double)maxScrollDistance;
- (double)minPercentageSigmoidAlpha;
- (double)minPercentageSigmoidBase;
- (double)minPercentageSigmoidPivot;
- (double)minPercentageSigmoidRange;
- (double)powerOfVerticalDirectionSine2;
- (bool)recognized;
- (void)reset;
- (bool)scrollFromRightToLeft;
- (struct CGPoint { double x1; double x2; })scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg2 translation:(struct CGPoint { double x1; double x2; })arg3 startPoint:(struct CGPoint { double x1; double x2; })arg4 locationInView:(struct CGPoint { double x1; double x2; })arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAccumulatedDragThresholdPercentage:(double)arg1;
- (void)setCancelScrollingIfTooMuchDrag:(bool)arg1;
- (void)setInertialMultiplierSigmoidAlpha:(double)arg1;
- (void)setInertialMultiplierSigmoidBase:(double)arg1;
- (void)setInertialMultiplierSigmoidPivot:(double)arg1;
- (void)setInertialMultiplierSigmoidRange:(double)arg1;
- (void)setMaxDragFromVerticalPerFrame:(double)arg1;
- (void)setMaxScrollDistance:(double)arg1;
- (void)setMinPercentageSigmoidAlpha:(double)arg1;
- (void)setMinPercentageSigmoidBase:(double)arg1;
- (void)setMinPercentageSigmoidPivot:(double)arg1;
- (void)setMinPercentageSigmoidRange:(double)arg1;
- (void)setPowerOfVerticalDirectionSine2:(double)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
