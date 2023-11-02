
@interface UISPathDrawing : NSObject <UISDrawing> {
    struct CGColor { } * _fillColor;
    struct CGPath { } * _path;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    long long  _type;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } drawingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })drawingSize;
- (id)initWithEllipseSize:(struct CGSize { double x1; double x2; })arg1 fillColor:(struct CGColor { }*)arg2;
- (id)initWithPath:(struct CGPath { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 fillColor:(struct CGColor { }*)arg3;
- (id)initWithRectSize:(struct CGSize { double x1; double x2; })arg1 fillColor:(struct CGColor { }*)arg2;
- (id)initWithRoundedRectSize:(struct CGSize { double x1; double x2; })arg1 cornerRadii:(double)arg2 fillColor:(struct CGColor { }*)arg3;
- (id)initWithType:(long long)arg1 path:(struct CGPath { }*)arg2 size:(struct CGSize { double x1; double x2; })arg3 fillColor:(struct CGColor { }*)arg4;

@end
