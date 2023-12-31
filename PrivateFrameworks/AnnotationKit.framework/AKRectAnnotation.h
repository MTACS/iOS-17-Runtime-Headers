
@interface AKRectAnnotation : AKRectangularShapeAnnotation {
    double  _cornerRadius;
}

@property double cornerRadius;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (double)cornerRadius;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (void)setCornerRadius:(double)arg1;

@end
