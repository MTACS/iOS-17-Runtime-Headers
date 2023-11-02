
@interface PUParallaxedTileLayoutInfo : PUTileLayoutInfo {
    struct CGPoint { 
        double x; 
        double y; 
    }  _parallaxOffset;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } parallaxOffset;

- (id)clone;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 cornerRadius:(double)arg5 cornerCurve:(id)arg6 cornerMask:(unsigned long long)arg7 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg8 zPosition:(double)arg9 parallaxOffset:(struct CGPoint { double x1; double x2; })arg10 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg11 coordinateSystem:(id)arg12;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 parallaxOffset:(struct CGPoint { double x1; double x2; })arg7 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 coordinateSystem:(id)arg9;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 parallaxOffset:(struct CGPoint { double x1; double x2; })arg7 coordinateSystem:(id)arg8;
- (bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (struct CGPoint { double x1; double x2; })parallaxOffset;

@end
