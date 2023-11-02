
@interface PXLayoutGenerator : NSObject <NSCopying> {
    unsigned long long  _itemCount;
    id /* block */  _itemLayoutInfoBlock;
    unsigned long long  _keyItemIndex;
    PXLayoutMetrics * _metrics;
}

@property (nonatomic, readonly) struct _PXCornerSpriteIndexes { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } cornerSpriteIndexes;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } estimatedSize;
@property (nonatomic, readonly) NSIndexSet *geometryKinds;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic, copy) id /* block */ itemLayoutInfoBlock;
@property (nonatomic) unsigned long long keyItemIndex;
@property (nonatomic, copy) PXLayoutMetrics *metrics;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct _PXCornerSpriteIndexes { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })cornerSpriteIndexes;
- (id)diagnosticDescription;
- (struct CGSize { double x1; double x2; })estimatedSize;
- (id)geometryKinds;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (id)init;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (unsigned long long)itemCount;
- (id /* block */)itemLayoutInfoBlock;
- (unsigned long long)keyItemIndex;
- (id)metrics;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;
- (void)setItemCount:(unsigned long long)arg1;
- (void)setItemLayoutInfoBlock:(id /* block */)arg1;
- (void)setKeyItemIndex:(unsigned long long)arg1;
- (void)setMetrics:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
