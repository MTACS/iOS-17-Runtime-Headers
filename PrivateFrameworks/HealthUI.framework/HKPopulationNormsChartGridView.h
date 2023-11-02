
@interface HKPopulationNormsChartGridView : UIView {
    unsigned long long  _xAxisSegmentCount;
    HKPopulationNormsAxisView * _xAxisView;
    unsigned long long  _yAxisSegmentCount;
    HKPopulationNormsAxisView * _yAxisView;
}

@property (nonatomic, readonly) unsigned long long xAxisSegmentCount;
@property (nonatomic, retain) HKPopulationNormsAxisView *xAxisView;
@property (nonatomic, readonly) unsigned long long yAxisSegmentCount;
@property (nonatomic, retain) HKPopulationNormsAxisView *yAxisView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_determineCanvasRectInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 yAxisWidth:(double)arg2 xAxisHeight:(double)arg3;
- (double)_determineXAxisHeight;
- (double)_determineYAxisWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })determineCanvasRect;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithXAxisLabels:(id)arg1 YAxisLabels:(id)arg2;
- (void)layoutSubviews;
- (void)relocalizeAxisLabels;
- (void)setXAxisView:(id)arg1;
- (void)setYAxisView:(id)arg1;
- (unsigned long long)xAxisSegmentCount;
- (id)xAxisView;
- (unsigned long long)yAxisSegmentCount;
- (id)yAxisView;

@end
