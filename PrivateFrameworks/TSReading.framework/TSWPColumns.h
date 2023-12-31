
@interface TSWPColumns : NSObject {
    unsigned long long  _columnCount;
    bool  _equalWidth;
    double  _gapArray;
    double  _widthArray;
}

@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) bool equalWidth;

+ (id)columns;

- (unsigned long long)columnCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)equalWidth;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (id)init;
- (id)initWithColumnCount:(unsigned long long)arg1;
- (id)initWithColumnCount:(unsigned long long)arg1 equalWidth:(bool)arg2 widthArray:(double*)arg3 gapArray:(double*)arg4;
- (id)initWithEqualColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)p_equalGapForEqualWidth:(double)arg1;
- (double)p_equalWidthForEqualGap:(double)arg1;
- (double)p_maxEqualGapForBodyWidth:(double)arg1;
- (void)p_setColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2;
- (void)p_setEqualWidth:(double)arg1 equalGap:(double)arg2;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4;
- (void)setColumnCount:(unsigned long long)arg1;
- (void)setEqualWidth:(bool)arg1;
- (void)setGap:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3;
- (void)setWidth:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end
