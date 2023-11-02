
@interface PXGPath : NSObject <NSCopying> {
    struct CGPath { } * _CGPath;
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
    int  _drawingMode;
    UIColor * _fillColor;
    double  _lineWidth;
    UIColor * _strokeColor;
}

@property (nonatomic, readonly) struct CGPath { }*CGPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) int drawingMode;
@property (nonatomic, readonly, copy) UIColor *fillColor;
@property (nonatomic, readonly) double lineWidth;
@property (nonatomic, readonly, copy) UIColor *strokeColor;

- (void).cxx_destruct;
- (struct CGPath { }*)CGPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)drawingMode;
- (id)fillColor;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 CGPath:(struct CGPath { }*)arg2 strokeColor:(id)arg3 lineWidth:(double)arg4 fillColor:(id)arg5 drawingMode:(int)arg6;
- (bool)isEqual:(id)arg1;
- (double)lineWidth;
- (id)strokeColor;

@end
