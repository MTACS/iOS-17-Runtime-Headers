
@interface PXGGeneratedSublayoutComposition : PXGSublayoutComposition {
    PXLayoutGenerator * _layoutGenerator;
    struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; } * _layoutGeometries;
    long long  _layoutGeometriesCapacity;
}

@property (nonatomic, readonly) PXLayoutGenerator *configuredLayoutGenerator;

- (void).cxx_destruct;
- (id)configuredLayoutGenerator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (void)dealloc;
- (void)invalidateLayout;
- (void)referenceSizeDidChange;
- (void)updateEstimatedSublayoutGeometries;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(id /* block */)arg2;

@end
