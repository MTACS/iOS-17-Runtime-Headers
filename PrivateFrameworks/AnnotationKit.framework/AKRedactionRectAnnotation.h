
@interface AKRedactionRectAnnotation : AKRectangularShapeAnnotation {
    bool  _isHighlighted;
    bool  _isOpaque;
}

@property bool isHighlighted;
@property bool isOpaque;

+ (bool)supportsSecureCoding;

- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitTestBounds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isHighlighted;
- (bool)isOpaque;
- (id)keysForValuesToObserveForRedrawing;
- (void)setIsHighlighted:(bool)arg1;
- (void)setIsOpaque:(bool)arg1;
- (bool)shouldBurnIn;

@end
