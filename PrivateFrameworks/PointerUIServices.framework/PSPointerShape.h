
@interface PSPointerShape : NSObject <NSCopying, NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    NSString * _cornerCurve;
    double  _cornerRadius;
    struct CGPath { } * _path;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pinnedPoint;
    long long  _shapeType;
    bool  _usesEvenOddFillRule;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly, copy) NSString *cornerCurve;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) struct CGPath { }*path;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } pinnedPoint;
@property (nonatomic, readonly) long long shapeType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) bool usesEvenOddFillRule;

+ (id)circleWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)circleWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)customShapeWithPath:(struct CGPath { }*)arg1;
+ (id)customShapeWithPath:(struct CGPath { }*)arg1 usesEvenOddFillRule:(bool)arg2;
+ (id)elasticRoundedRectPinnedAtPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)roundedRectWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
+ (id)roundedRectWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 cornerCurve:(id)arg3;
+ (id)roundedRectWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2;
+ (bool)supportsSecureCoding;
+ (id)systemShape;

- (void).cxx_destruct;
- (struct CGPath { }*)_createMutablePathByDecodingData:(id)arg1;
- (id)_initWithShapeType:(long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cornerCurve;
- (double)cornerRadius;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGPath { }*)path;
- (struct CGPoint { double x1; double x2; })pinnedPoint;
- (long long)shapeType;
- (struct CGSize { double x1; double x2; })size;
- (bool)usesEvenOddFillRule;

@end
