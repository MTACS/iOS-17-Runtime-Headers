
@interface PUBadgeTileLayoutInfo : PUTileLayoutInfo {
    double  _contentWidth;
    bool  _isOverContent;
    double  _leadingContentWidth;
}

@property (nonatomic, readonly) double contentWidth;
@property (nonatomic, readonly) bool isOverContent;
@property (nonatomic, readonly) double leadingContentWidth;

- (id)clone;
- (double)contentWidth;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 hitTestOutset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg7 coordinateSystem:(id)arg8 isOverContent:(bool)arg9 contentWidth:(double)arg10 leadingContentWidth:(double)arg11;
- (bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (bool)isOverContent;
- (double)leadingContentWidth;

@end
