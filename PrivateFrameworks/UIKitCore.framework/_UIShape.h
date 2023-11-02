
@interface _UIShape : NSObject <NSCopying> {
    NSString * _cornerCurve;
    unsigned long long  _cornerMask;
    double  _cornerRadius;
    UIBezierPath * _path;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) NSString *cornerCurve;
@property (nonatomic, readonly) unsigned long long cornerMask;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) bool isRect;
@property (nonatomic, readonly) UIBezierPath *outline;
@property (nonatomic, readonly) UIBezierPath *path;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) _UIShape *zeroOriginShape;

+ (id)shapeWithPath:(id)arg1;
+ (id)shapeWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 cornerCurve:(id)arg3;
+ (id)shapeWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 cornerCurve:(id)arg3 cornerMask:(unsigned long long)arg4;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cornerCurve;
- (unsigned long long)cornerMask;
- (double)cornerRadius;
- (id)description;
- (bool)isEqual:(id)arg1;
- (bool)isRect;
- (id)outline;
- (id)path;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (id)shapeConvertedFromCoordinateSpace:(id)arg1 toCoordinateSpace:(id)arg2;
- (struct CGSize { double x1; double x2; })size;
- (id)zeroOriginShape;

@end
