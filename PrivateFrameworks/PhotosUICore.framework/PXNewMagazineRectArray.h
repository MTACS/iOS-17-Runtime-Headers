
@interface PXNewMagazineRectArray : NSObject {
    unsigned long long  _currentIndex;
    unsigned long long  _endingType;
    bool  _isPerfectEnding;
    struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; } * _rects;
    double  _score;
    unsigned long long  _size;
    PXNewMagazineGrid * _tileGrid;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) unsigned long long endingType;
@property (nonatomic, readonly) struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; }*rects;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (void)addRect:(struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (unsigned long long)count;
- (void)dealloc;
- (unsigned long long)endingType;
- (id)immutableCopyForCurrentRectsCount;
- (id)initWithSize:(unsigned long long)arg1 tileGrid:(id)arg2;
- (bool)isEqualToRectArray:(id)arg1;
- (bool)isGoodEnding;
- (bool)isPerfectEnding;
- (bool)nextEmptyTileX:(long long*)arg1 Y:(long long*)arg2 maxWidth:(long long*)arg3;
- (struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; })rectAtIndex:(unsigned long long)arg1;
- (struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; }*)rects;
- (void)removeLastRect;
- (void)reset;
- (unsigned long long)rowsUsed;
- (double)score;
- (void)setEndingType:(unsigned long long)arg1;
- (void)setScore:(double)arg1;
- (double)tileDensity;

@end
