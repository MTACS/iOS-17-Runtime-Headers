
@interface AKSpeechBubbleAnnotation : AKThoughtBubbleAnnotation {
    double  _pointyBitBaseWidthAngle;
}

@property double pointyBitBaseWidthAngle;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (double)pointyBitBaseWidthAngle;
- (void)setPointyBitBaseWidthAngle:(double)arg1;

@end
