
@interface PXZoomablePhotosAlphaAnimator : PXObservable {
    NSArray * _allowedColumns;
    double  _autoFadeAmount;
    double  _autoFadeColumnIndex;
    double  _columnIndex;
    double  _columnIndexDelta;
    double  _columnIndexVelocity;
    double  _currentDirection;
    double  _directionAnchorColumnIndex;
    PXDisplayLink * _displayLink;
    bool  _isAnimating;
    bool  _isBeingMutated;
    bool  _isPerformingChangesWithoutAnimation;
    double  _lastTickTime;
    long long  _layerCount;
    struct PXAlphaLayer { 
        long long columnIndex; 
        long long columns; 
        double itemWidth; 
        struct PXAlphaTransitionInfo {} *leftTransition; 
        struct PXAlphaTransitionInfo {} *rightTransition; 
    }  _layers;
    long long  _maxColumnsForAspectFit;
    double  _presentationAutoFadeAmount;
    double  _presentationColumnIndex;
    double  _targetColumnIndex;
    struct PXAlphaTransitionInfo { 
        double fadeRangeMin; 
        double fadeRangeMax; 
        double autoFadeLeftValue; 
        double autoFadeRightValue; 
        struct PXAlphaLayer {} *leftLayer; 
        struct PXAlphaLayer {} *rightLayer; 
    }  _transitionInfos;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic, readonly) NSArray *allowedColumns;
@property (nonatomic, readonly) double autoFadeAmount;
@property (nonatomic) double autoFadeColumnIndex;
@property (nonatomic, readonly) double columnIndex;
@property (nonatomic) bool isAnimating;
@property (nonatomic, readonly) bool isBeingMutated;
@property (nonatomic, readonly) long long maxColumnsForAspectFit;
@property (nonatomic) double presentationAutoFadeAmount;
@property (nonatomic) double presentationColumnIndex;
@property (nonatomic, readonly) double targetColumnIndex;

- (void).cxx_destruct;
- (void)_invalidatePresentationValue;
- (void)_resetAnimatedValues;
- (double)_targetColumnIndex;
- (void)_tick:(id)arg1;
- (struct PXAlphaTransitionInfo { double x1; double x2; double x3; double x4; struct PXAlphaLayer {} *x5; struct PXAlphaLayer {} *x6; }*)_transitionInfoForValue:(double)arg1;
- (void)_updatePresentationValue;
- (void)_updateTransitionInfo;
- (id)allowedColumns;
- (double)autoFadeAmount;
- (double)autoFadeColumnIndex;
- (double)columnIndex;
- (void)dealloc;
- (id)description;
- (void)didPerformChanges;
- (id)init;
- (bool)isAnimating;
- (bool)isBeingMutated;
- (long long)maxColumnsForAspectFit;
- (void)performChanges:(id /* block */)arg1;
- (void)performChangesWithAnimation:(bool)arg1 changeBlock:(id /* block */)arg2;
- (double)presentationAutoFadeAmount;
- (double)presentationColumnIndex;
- (void)setAllowedColumns:(id)arg1;
- (void)setAutoFadeAmount:(double)arg1;
- (void)setAutoFadeColumnIndex:(double)arg1;
- (void)setColumnIndex:(double)arg1;
- (void)setIsAnimating:(bool)arg1;
- (void)setMaxColumnsForAspectFit:(long long)arg1;
- (void)setPresentationAutoFadeAmount:(double)arg1;
- (void)setPresentationColumnIndex:(double)arg1;
- (void)setTargetColumnIndex:(double)arg1;
- (double)targetColumnIndex;

@end
