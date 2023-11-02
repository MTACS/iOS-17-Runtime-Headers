
@interface PXMonthsSublayoutComposition : PXGGeneratedSublayoutComposition {
    NSIndexSet * _indexesOfChapterHeaders;
    NSIndexSet * _indexesOfHeroes;
    PXMonthsLayoutGenerator * _layoutGenerator;
    PXMonthsLayoutMetrics * _metrics;
}

@property (nonatomic, copy) PXMonthsLayoutMetrics *metrics;
@property (nonatomic, readonly) bool presentedSingleColumn;

- (void).cxx_destruct;
- (id)configuredLayoutGenerator;
- (id)metrics;
- (bool)presentedSingleColumn;
- (void)setMetrics:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sublayoutInsetsForStylableType:(long long)arg1;
- (void)updateSublayoutAttributes;

@end
