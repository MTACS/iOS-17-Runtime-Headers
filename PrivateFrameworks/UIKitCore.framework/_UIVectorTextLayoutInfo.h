
@interface _UIVectorTextLayoutInfo : NSObject {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _coordinateAdjustment;
    struct __CTFrame { } * _frame;
    _UIVectorTextLayoutParameters * _parameters;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } coordinateAdjustment;
@property (nonatomic) struct __CTFrame { }*frame;
@property (nonatomic, retain) _UIVectorTextLayoutParameters *parameters;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })coordinateAdjustment;
- (void)dealloc;
- (struct __CTFrame { }*)frame;
- (id)parameters;
- (double)scale;
- (void)setCoordinateAdjustment:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setFrame:(struct __CTFrame { }*)arg1;
- (void)setParameters:(id)arg1;

@end
