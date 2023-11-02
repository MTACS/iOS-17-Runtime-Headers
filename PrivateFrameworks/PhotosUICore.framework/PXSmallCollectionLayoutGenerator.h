
@interface PXSmallCollectionLayoutGenerator : PXLayoutGenerator {
    struct _PXCornerSpriteIndexes { 
        unsigned int topLeft; 
        unsigned int topRight; 
        unsigned int bottomLeft; 
        unsigned int bottomRight; 
    }  _cornerSpriteIndexes;
    struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; } * _geometries;
    bool  _isPrepared;
    long long  _numberOfItems;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pageRect;
}

@property (nonatomic, copy) PXSmallCollectionLayoutMetrics *metrics;
@property (nonatomic, readonly) long long numberOfItems;

+ (long long)maximumNumberOfItemsSupportedForStyle:(unsigned long long)arg1;

- (void)_fillEquallyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 numberOfItems:(long long)arg2 axis:(long long)arg3 resultHandler:(id /* block */)arg4;
- (void)_prepareEditorialStyle;
- (void)_prepareHighQualityAggregationStyle;
- (void)_prepareIfNeeded;
- (void)_prepareLowQualityAggregationStyle;
- (void)_sliceItemFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 itemAspectRatio:(double)arg2 axis:(long long)arg3 sliceHandler:(id /* block */)arg4 remainderHandler:(id /* block */)arg5;
- (struct _PXCornerSpriteIndexes { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })cornerSpriteIndexes;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })estimatedSize;
- (void)getGeometries:(out struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (id)initWithMetrics:(id)arg1;
- (id)initWithNumberOfItems:(long long)arg1 metrics:(id)arg2;
- (unsigned long long)itemCount;
- (unsigned long long)keyItemIndex;
- (long long)numberOfItems;
- (struct CGSize { double x1; double x2; })size;

@end
