
@interface AXNamedReplayableGesture : AXMutableReplayableGesture {
    bool  _hasLocalizableName;
    NSString * _name;
    bool  _shouldPerformAtOriginalLocation;
}

@property (nonatomic) bool hasLocalizableName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool shouldPerformAtOriginalLocation;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (id)_fingerIdentifierForFingerAtIndex:(unsigned long long)arg1;
+ (id)gestureWithLegacyFormatDictionary:(id)arg1;
+ (id)gestureWithPoints:(id)arg1 times:(id)arg2 forces:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)gestureShiftedByOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hasLocalizableName;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setHasLocalizableName:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setShouldPerformAtOriginalLocation:(bool)arg1;
- (bool)shouldPerformAtOriginalLocation;

// Image: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction

+ (void)_addAllFingerPointsForPoint:(struct CGPoint { double x1; double x2; })arg1 numberOfFingers:(unsigned long long)arg2 toReplayableGesture:(id)arg3 atTime:(double)arg4;
+ (void)_addFingerPoints:(id)arg1 toReplayableGesture:(id)arg2 atTime:(double)arg3;
+ (id)_pinchGestureWithCenter:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 radiusDelta:(double)arg3 angleDelta:(double)arg4 startingWidth:(double)arg5;
+ (id)_tapGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1 isDoubleTap:(bool)arg2 numberOfFingers:(unsigned long long)arg3 force:(double)arg4;
+ (id)flickGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1 angle:(double)arg2;
+ (id)flickGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1 angle:(double)arg2 numberOfFingers:(unsigned long long)arg3;
+ (id)flickGestureStartingAtPoint:(struct CGPoint { double x1; double x2; })arg1 endingAtPoint:(struct CGPoint { double x1; double x2; })arg2 numberOfFingers:(unsigned long long)arg3;
+ (id)forceTouchGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)holdGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1 withDuration:(double)arg2 numberOfFingers:(unsigned long long)arg3;
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2;
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 numberOfFingers:(unsigned long long)arg3;
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 numberOfFingers:(unsigned long long)arg3 initialHoldDuration:(double)arg4;
+ (id)longPressGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)pinchInGestureWithPoint:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)pinchOutGestureWithPoint:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)rotateLeftGestureWithPoint:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)rotateRightGestureWithPoint:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)scrollGestureFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3;
+ (id)tapGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)tapGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1 isDoubleTap:(bool)arg2 numberOfFingers:(unsigned long long)arg3;

@end
