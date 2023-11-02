
@interface TeaCharts.LineSeriesAccessibilityElement : UIAccessibilityElement <AXChart> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  chartModel;
    void dataElements;
    void interactor;
    void series;
    void xAxisDateFormatter;
}

@property (nonatomic, retain) AXChartDescriptor *accessibilityChartDescriptor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrame;

- (void).cxx_destruct;
- (id)accessibilityChartDescriptor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)init;
- (id)initWithAccessibilityContainer:(id)arg1;
- (void)setAccessibilityChartDescriptor:(id)arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)tc_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2;

@end
