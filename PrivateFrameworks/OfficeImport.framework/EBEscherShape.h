
@interface EBEscherShape : ESDObject {
    CHDChart * mChart;
    NSData * mChartData;
    bool  mShowLegend;
}

- (void).cxx_destruct;
- (id)chart;
- (id)chartData;
- (void)setChart:(id)arg1;
- (void)setChartData:(id)arg1;
- (void)setShowLegend:(bool)arg1;
- (bool)showLegend;

@end
