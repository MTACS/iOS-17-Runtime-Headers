
@interface PXEditorialLayoutGenerator : PXLayoutGenerator {
    struct CGSize { 
        double width; 
        double height; 
    }  _actualSize;
    struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; } * _geometries;
    unsigned long long  _geometriesCount;
    NSIndexSet * _geometrySet;
    bool  _isPrepared;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _rects;
    PXMagazineLayoutTileMaker * _tileMaker;
}

@property (nonatomic, copy) PXEditorialLayoutMetrics *metrics;

- (void).cxx_destruct;
- (struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; })_geometryFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 index:(unsigned long long)arg2;
- (void)_getContentGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_getHeaderGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_prepareBuffersForCount:(unsigned long long)arg1;
- (void)_prepareIfNeeded;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })estimatedSize;
- (id)geometryKinds;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
