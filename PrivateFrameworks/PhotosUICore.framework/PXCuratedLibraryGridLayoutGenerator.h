
@interface PXCuratedLibraryGridLayoutGenerator : PXLayoutGenerator {
    struct CGSize { 
        double width; 
        double height; 
    }  _actualSize;
    struct _PXCornerSpriteIndexes { 
        unsigned int topLeft; 
        unsigned int topRight; 
        unsigned int bottomLeft; 
        unsigned int bottomRight; 
    }  _cornerSpriteIndexes;
    struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; } * _geometries;
    unsigned long long  _geometriesCount;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    double  _interItemSpacing;
    bool  _isPrepared;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    double  _lastFullRowBottomEdge;
}

@property (nonatomic, readonly) double lastFullRowBottomEdge;

- (void)_prepareGeometriesBufferForCount:(unsigned long long)arg1;
- (void)_prepareIfNeeded;
- (struct _PXCornerSpriteIndexes { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })cornerSpriteIndexes;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })estimatedSize;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })geometriesRangeCoveringRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (double)lastFullRowBottomEdge;
- (struct CGSize { double x1; double x2; })size;

@end
