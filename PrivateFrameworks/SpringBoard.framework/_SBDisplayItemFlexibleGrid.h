
@interface _SBDisplayItemFlexibleGrid : NSObject <_SBDisplayItemGridProvider> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    SBSwitcherChamoisLayoutAttributes * _chamoisLayoutAttributes;
    NSArray * _heights;
    SBSwitcherChamoisSettings * _settings;
    NSArray * _widths;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildGridWithScreenScale:(double)arg1;
- (id)_gridHeightsForSafeHeight:(double)arg1 minimumHeight:(double)arg2;
- (id)_gridWidthsForSafeWidth:(double)arg1 minimumWidth:(double)arg2;
- (id)allHeights;
- (id)allWidths;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 screenScale:(double)arg2 chamoisLayoutAttributes:(id)arg3;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (struct CGSize { double x1; double x2; })nearestGridSizeForSize:(struct CGSize { double x1; double x2; })arg1 countOnStage:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })sizeAtIndexFromFullWidthForBounds:(unsigned long long)arg1;

@end
