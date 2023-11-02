
@interface PXViewLayoutHelper : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerBounds;
    <UICoordinateSpace> * _coordinateSpace;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _reverseTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

+ (void)initialize;
+ (void)performLayoutWithinView:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)setUserInterfaceLayoutDirection:(long long)arg1;
+ (long long)userInterfaceLayoutDirection;

- (void).cxx_destruct;
- (void)_getFirstBaseline:(double*)arg1 lastBaseline:(double*)arg2 forView:(id)arg3 withSize:(struct CGSize { double x1; double x2; })arg4;
- (id)_init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_orientedFrameOfView:(id)arg1;
- (void)_setOrientedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forView:(id)arg2;
- (void)_setUpWithView:(id)arg1;
- (void)_tearDown;
- (double)bottomOfView:(id)arg1;
- (double)firstBaselineOfView:(id)arg1;
- (double)horizontalCenterOfView:(id)arg1;
- (id)init;
- (double)lastBaselineOfView:(id)arg1;
- (void)layoutView:(id)arg1 withAttributes:(const struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; }*)arg2;
- (double)leadingOfView:(id)arg1;
- (double)topOfView:(id)arg1;
- (double)trailingOfView:(id)arg1;
- (double)verticalCenterOfView:(id)arg1;

@end
