
@interface HKHistogramBarSeries : HKBarSeries {
    unsigned long long  _numberOfColumnsStorage;
    NSLock * _seriesMutableStateLock;
}

@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfColumnsStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;

- (void).cxx_destruct;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimumSpacing:(double)arg3;
- (id)initWithFillStyle:(id)arg1 numberOfColumns:(unsigned long long)arg2 cornerRadii:(struct CGSize { double x1; double x2; })arg3;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfColumnsStorage;
- (id)seriesMutableStateLock;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)setNumberOfColumnsStorage:(unsigned long long)arg1;

@end
