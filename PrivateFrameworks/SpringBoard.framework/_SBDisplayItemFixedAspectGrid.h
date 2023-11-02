
@interface _SBDisplayItemFixedAspectGrid : _SBDisplayItemFlexibleGrid {
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedSize;
    bool  _maximizeSupported;
    bool  _supportsOrthogonalSizes;
}

- (bool)_allowFullScreen;
- (void)_buildFixedGridWithScreenScale:(double)arg1;
- (void)_buildGridWithScreenScale:(double)arg1;
- (id)allHeights;
- (id)allWidths;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fixedSize:(struct CGSize { double x1; double x2; })arg2 screenScale:(double)arg3 supportsOrthogonalSizes:(bool)arg4 chamoisLayoutAttributes:(id)arg5;
- (struct CGSize { double x1; double x2; })nearestGridSizeForSize:(struct CGSize { double x1; double x2; })arg1 countOnStage:(unsigned long long)arg2;

@end
