
@interface PXCompositeEditorialLayoutGenerator : PXLayoutGenerator {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; } * _geometries;
    unsigned long long  _geometriesCount;
    bool  _isPrepared;
    double * _layoutItemWeights;
    unsigned long long  _layoutItemWeightsCount;
    long long  _maxTemplateItemCount;
    long long  _minNumberOfColumns;
    long long  _minTemplateItemCount;
    NSDictionary * _templatesByTileCount;
}

@property (nonatomic, copy) PXCompositeEditorialLayoutMetrics *metrics;

- (void).cxx_destruct;
- (void)_computeTemplatesByTileCountIfNeeded;
- (void)_enumerateTemplatesWithBlock:(id /* block */)arg1;
- (struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; })_geometryFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 index:(unsigned long long)arg2;
- (id)_layoutInputsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_minCostingTemplateAmongTemplates:(id)arg1 forFittingInputItems:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 minCost:(out double*)arg4;
- (void)_normalizeWeightsForInputItems:(id)arg1;
- (void)_prepareGeometriesBufferForCount:(unsigned long long)arg1;
- (void)_prepareIfNeeded;
- (void)_prepareLayoutItemWeightsBufferForCount:(unsigned long long)arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (struct CGSize { double x1; double x2; })size;

@end
