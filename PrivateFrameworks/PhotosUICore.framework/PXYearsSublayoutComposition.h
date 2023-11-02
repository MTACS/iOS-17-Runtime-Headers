
@interface PXYearsSublayoutComposition : PXGGeneratedSublayoutComposition {
    PXYearsLayoutGenerator * _layoutGenerator;
    PXYearsLayoutMetrics * _metrics;
}

@property (nonatomic, copy) PXYearsLayoutMetrics *metrics;
@property (nonatomic, readonly) long long presentedNumberOfColumns;

- (void).cxx_destruct;
- (id)configuredLayoutGenerator;
- (id)metrics;
- (long long)presentedNumberOfColumns;
- (void)setMetrics:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sublayoutInsetsForStylableType:(long long)arg1;

@end
