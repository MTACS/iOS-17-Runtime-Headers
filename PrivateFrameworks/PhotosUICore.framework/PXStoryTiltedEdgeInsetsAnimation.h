
@interface PXStoryTiltedEdgeInsetsAnimation : PXStoryValueAnimation {
    struct { 
        struct { 
            double preRotationInset; 
            double rotationAngle; 
            double postRotationInset; 
        } top; 
        struct { 
            double preRotationInset; 
            double rotationAngle; 
            double postRotationInset; 
        } left; 
        struct { 
            double preRotationInset; 
            double rotationAngle; 
            double postRotationInset; 
        } bottom; 
        struct { 
            double preRotationInset; 
            double rotationAngle; 
            double postRotationInset; 
        } right; 
    }  _currentEdgeInsets;
    struct { 
        struct { 
            double preRotationInset; 
            double rotationAngle; 
            double postRotationInset; 
        } top; 
        struct { 
            double preRotationInset; 
            double rotationAngle; 
            double postRotationInset; 
        } left; 
        struct { 
            double preRotationInset; 
            double rotationAngle; 
            double postRotationInset; 
        } bottom; 
        struct { 
            double preRotationInset; 
            double rotationAngle; 
            double postRotationInset; 
        } right; 
    }  _sourceEdgeInsets;
    struct { 
        struct { 
            double preRotationInset; 
            double rotationAngle; 
            double postRotationInset; 
        } top; 
        struct { 
            double preRotationInset; 
            double rotationAngle; 
            double postRotationInset; 
        } left; 
        struct { 
            double preRotationInset; 
            double rotationAngle; 
            double postRotationInset; 
        } bottom; 
        struct { 
            double preRotationInset; 
            double rotationAngle; 
            double postRotationInset; 
        } right; 
    }  _targetEdgeInsets;
}

@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; } currentEdgeInsets;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; } sourceEdgeInsets;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; } targetEdgeInsets;

- (struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; })currentEdgeInsets;
- (id)initWithIdentifier:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 curveInfo:(struct { long long x1; union { double x_2_1_1; } x2; })arg3;
- (id)initWithIdentifier:(id)arg1 sourceEdgeInsets:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; })arg2 targetEdgeInsets:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; })arg3 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 curveInfo:(struct { long long x1; union { double x_2_1_1; } x2; })arg5;
- (id)initWithSourceEdgeInsets:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; })arg1 targetEdgeInsets:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; })arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 curveInfo:(struct { long long x1; union { double x_2_1_1; } x2; })arg4;
- (void)setCurrentEdgeInsets:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; })sourceEdgeInsets;
- (struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; })targetEdgeInsets;
- (void)updateCurrentValueWithProgress:(double)arg1;

@end
