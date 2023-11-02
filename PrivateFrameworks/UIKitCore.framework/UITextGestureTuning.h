
@interface UITextGestureTuning : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _caretDistance;
    NSObject<UICoordinateSpace> * _containerCoordinateSpace;
    bool  _didBreakLineThreshold;
    NSObject<UICoordinateSpace> * _gestureCoordinateSpace;
    bool  _includeTipProjection;
    double  _initialOffsetFromTopOfCaret;
    double  _initialPosition;
    long long  _lastTouchType;
    double  _lineBreakProgress;
    bool  _shouldIncludeConstantOffset;
    bool  _shouldUseLineThreshold;
    bool  _strongerBiasAgainstUp;
    UITextMagnifierTimeWeightedPoint * _weightedPoint;
}

@property (nonatomic) NSObject<UICoordinateSpace> *containerCoordinateSpace;
@property (nonatomic, readonly) bool didBreakLineThreshold;
@property (nonatomic) NSObject<UICoordinateSpace> *gestureCoordinateSpace;
@property (nonatomic) bool includeTipProjection;
@property (nonatomic, readonly) double initialPosition;
@property (nonatomic, readonly) double lineBreakProgress;
@property (nonatomic) bool shouldIncludeConstantOffset;
@property (nonatomic) bool shouldUseLineThreshold;
@property (nonatomic) bool strongerBiasAgainstUp;

- (void).cxx_destruct;
- (void)_reset;
- (void)assertInitialPositionFromTopOfCaret:(double)arg1 distanceFromCaret:(struct CGPoint { double x1; double x2; })arg2;
- (id)containerCoordinateSpace;
- (bool)didBreakLineThreshold;
- (id)gestureCoordinateSpace;
- (bool)includeTipProjection;
- (id)init;
- (double)initialPosition;
- (double)lineBreakProgress;
- (struct CGPoint { double x1; double x2; })pointForGestureState:(long long)arg1 point:(struct CGPoint { double x1; double x2; })arg2 translation:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })pointIfPlacedCarefully:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContainerCoordinateSpace:(id)arg1;
- (void)setGestureCoordinateSpace:(id)arg1;
- (void)setIncludeTipProjection:(bool)arg1;
- (void)setShouldIncludeConstantOffset:(bool)arg1;
- (void)setShouldUseLineThreshold:(bool)arg1;
- (void)setStrongerBiasAgainstUp:(bool)arg1;
- (bool)shouldIncludeConstantOffset;
- (bool)shouldUseLineThreshold;
- (bool)strongerBiasAgainstUp;
- (struct CGPoint { double x1; double x2; })touchAlignedPointForPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateVisibilityOffsetForGestureState:(long long)arg1 touchType:(long long)arg2 locationInSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg3 majorRadius:(double)arg4;
- (void)updateWeightedPointWithGestureState:(long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateWithTouches:(id)arg1 gestureState:(long long)arg2;

@end
