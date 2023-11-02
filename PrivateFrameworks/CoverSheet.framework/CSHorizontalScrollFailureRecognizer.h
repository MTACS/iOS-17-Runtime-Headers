
@interface CSHorizontalScrollFailureRecognizer : UIGestureRecognizer <PTSettingsKeyObserver> {
    bool  _allowMultiTouch;
    bool  _armed;
    NSArray * _debugViews;
    double  _effectiveBottomAngle;
    double  _effectiveTopAngle;
    bool  _externallyEnabled;
    unsigned long long  _maxAllowableVerticalOffset;
    double  _maxAllowedBottomAngle;
    double  _maxAllowedTopAngle;
    double  _minAllowedBottomAngle;
    double  _minAllowedTopAngle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startingLocation;
    NSMutableSet * _touches;
    bool  _tracking;
    UIEvent * _triggeredEvent;
    bool  _viewDebugArea;
}

@property (nonatomic) bool allowMultiTouch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxAllowableVerticalOffset;
@property (nonatomic) double maxAllowedBottomAngle;
@property (nonatomic) double maxAllowedTopAngle;
@property (nonatomic) double minAllowedBottomAngle;
@property (nonatomic) double minAllowedTopAngle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIEvent *triggeredEvent;
@property (nonatomic) bool viewDebugArea;

- (void).cxx_destruct;
- (long long)_activeTouchCountForEvent:(id)arg1;
- (struct CGPoint { double x1; double x2; })_averagePointFromTouches;
- (double)_computeEffectiveAngleFromMin:(double)arg1 max:(double)arg2;
- (double)_effectiveBottomAngle;
- (double)_effectiveTopAngle;
- (bool)_effectivelyEnabled;
- (bool)_isLocationOutOfBounds:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isOutOfBounds:(struct CGPoint { double x1; double x2; })arg1 forAngle:(double)arg2;
- (bool)_isOutOfBoundsVertically:(struct CGPoint { double x1; double x2; })arg1;
- (void)_loadFromSettings:(id)arg1;
- (struct CGPoint { double x1; double x2; })_locationOfTouch:(id)arg1 inView:(id)arg2;
- (double)_maxAllowableVerticalOffsetForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_recognizeForMultiTouchIfNecessary:(id)arg1;
- (void)_setArmed:(bool)arg1;
- (void)_setDebugViewsColor:(id)arg1;
- (void)_setDebugViewsVisible:(bool)arg1;
- (id)_touchesFromEvent:(id)arg1;
- (void)_updateEnabled;
- (bool)allowMultiTouch;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isEnabled;
- (unsigned long long)maxAllowableVerticalOffset;
- (double)maxAllowedBottomAngle;
- (double)maxAllowedTopAngle;
- (double)minAllowedBottomAngle;
- (double)minAllowedTopAngle;
- (void)reset;
- (void)setAllowMultiTouch:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMaxAllowableVerticalOffset:(unsigned long long)arg1;
- (void)setMaxAllowedBottomAngle:(double)arg1;
- (void)setMaxAllowedTopAngle:(double)arg1;
- (void)setMinAllowedBottomAngle:(double)arg1;
- (void)setMinAllowedTopAngle:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setViewDebugArea:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)triggeredEvent;
- (bool)viewDebugArea;

@end
