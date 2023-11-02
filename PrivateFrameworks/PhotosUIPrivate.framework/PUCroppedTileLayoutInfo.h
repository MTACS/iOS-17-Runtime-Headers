
@interface PUCroppedTileLayoutInfo : PUTileLayoutInfo {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cropInsets;
}

@property (setter=_setCropInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cropInsets;

- (void)_setCropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)clone;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cropInsets;
- (id)description;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 coordinateSystem:(id)arg8;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 alpha:(double)arg5 cornerRadius:(double)arg6 cornerCurve:(id)arg7 cornerMask:(unsigned long long)arg8 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg9 zPosition:(double)arg10 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg11 coordinateSystem:(id)arg12;
- (bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)layoutInfoByInterpolatingWithLayoutInfo:(id)arg1 mixFactor:(double)arg2 coordinateSystem:(id)arg3;

@end
