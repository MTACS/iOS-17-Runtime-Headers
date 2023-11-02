
@interface PXStoryRectAnimation : PXStoryValueAnimation {
    struct { 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } t; 
    }  _currentRect;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _normalizingTransform;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outerBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
    struct { 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } t; 
    }  _sourceRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRectWithoutRotation;
    double  _sourceRotation;
    struct { 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } t; 
    }  _targetRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetRectWithoutRotation;
    double  _targetRotation;
}

@property (nonatomic, readonly) struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; } currentRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outerBounds;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic, readonly) struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; } sourceRect;
@property (nonatomic, readonly) struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; } targetRect;

- (struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; })currentRect;
- (id)initWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 curveInfo:(struct { long long x1; union { double x_2_1_1; } x2; })arg2;
- (id)initWithIdentifier:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 curveInfo:(struct { long long x1; union { double x_2_1_1; } x2; })arg3;
- (id)initWithIdentifier:(id)arg1 sourceRect:(struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; })arg2 targetRect:(struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; })arg3 outerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 referenceSize:(struct CGSize { double x1; double x2; })arg5 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 curveInfo:(struct { long long x1; union { double x_2_1_1; } x2; })arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outerBounds;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)setCurrentRect:(struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; })arg1;
- (struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; })sourceRect;
- (struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; })targetRect;
- (void)updateCurrentValueWithProgress:(double)arg1;

@end
