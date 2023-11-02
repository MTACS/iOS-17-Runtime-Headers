
@interface PXGStackedSublayoutComposition : PXGSublayoutComposition {
    long long  _axis;
    double  _interlayoutSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
}

@property (nonatomic) long long axis;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;

- (long long)axis;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (id)init;
- (double)interlayoutSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)referenceSizeDidChange;
- (void)setAxis:(long long)arg1;
- (void)setInterlayoutSpacing:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)updateEstimatedSublayoutGeometries;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(id /* block */)arg2;

@end
