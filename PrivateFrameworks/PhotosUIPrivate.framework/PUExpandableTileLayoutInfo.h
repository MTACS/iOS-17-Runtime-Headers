
@interface PUExpandableTileLayoutInfo : PUTileLayoutInfo {
    struct CGSize { 
        double width; 
        double height; 
    }  _expandedSize;
    bool  _isExpanded;
    struct CGSize { 
        double width; 
        double height; 
    }  _unexpandedSize;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } expandedSize;
@property (nonatomic, readonly) bool isExpanded;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } unexpandedSize;

- (id)clone;
- (struct CGSize { double x1; double x2; })expandedSize;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 isExpanded:(bool)arg8 expandedSize:(struct CGSize { double x1; double x2; })arg9 unexpandedSize:(struct CGSize { double x1; double x2; })arg10;
- (bool)isExpanded;
- (bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (struct CGSize { double x1; double x2; })unexpandedSize;

@end
