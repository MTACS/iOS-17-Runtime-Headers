
@interface UIShape : NSObject <NSCopying, UIShapeProvider> {
    void value;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

+ (id)_contentShape;
+ (id)capsuleShape;
+ (id)circleShape;
+ (id)fixedRectShapeWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)fixedRectShapeWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
+ (id)fixedRectShapeWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 cornerCurve:(long long)arg3 maskedCorners:(unsigned long long)arg4;
+ (id)rectShape;
+ (id)rectShapeWithCornerRadius:(double)arg1;
+ (id)rectShapeWithCornerRadius:(double)arg1 cornerCurve:(long long)arg2;
+ (id)rectShapeWithCornerRadius:(double)arg1 cornerCurve:(long long)arg2 maskedCorners:(unsigned long long)arg3;
+ (id)shapeWithBezierPath:(id)arg1;
+ (id)shapeWithProvider:(id)arg1;

- (void).cxx_destruct;
- (id)_resolvedShapeInView:(id)arg1;
- (id)copyWithZone:(void*)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)resolvedShapeInContext:(id)arg1;
- (id)shapeByApplyingInset:(double)arg1;
- (id)shapeByApplyingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)shapeWithBezierPath:(id)arg1;
- (id)shapeWithProvider:(id)arg1;

@end
