
@interface TSDBrushStrokeDirectSurfaceRenderingContext : NSObject {
    double  _contentsScale;
    struct CGColorSpace { } * _destinationColorSpaceOverride;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    <MTLDevice> * _metalDeviceOverride;
    IOSurface * _surface;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic, readonly) double contentsScale;
@property (nonatomic, readonly) struct CGColorSpace { }*destinationColorSpaceOverride;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) <MTLDevice> *metalDeviceOverride;
@property (nonatomic, readonly) IOSurface *surface;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (void).cxx_destruct;
- (double)contentsScale;
- (void)dealloc;
- (struct CGColorSpace { }*)destinationColorSpaceOverride;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithSurface:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 contentsScale:(double)arg4 destinationColorSpaceOverride:(struct CGColorSpace { }*)arg5 metalDeviceOverride:(id)arg6;
- (id)metalDeviceOverride;
- (id)surface;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
