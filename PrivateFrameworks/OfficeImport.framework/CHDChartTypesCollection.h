
@interface CHDChartTypesCollection : EDCollection {
    CHDChart * mChart;
}

- (void).cxx_destruct;
- (unsigned long long)addObject:(id)arg1;
- (id)initWithChart:(id)arg1;
- (void)resetSeriesOrder;

@end
