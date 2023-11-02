
@interface HKPopulationNormsAxisView : UIView {
    NSDictionary * _axisLabelAttributes;
    NSArray * _axisLabelValues;
    NSMutableArray * _axisLabelViews;
    long long  _orientation;
}

@property (nonatomic, retain) NSDictionary *axisLabelAttributes;
@property (nonatomic, retain) NSArray *axisLabelValues;
@property (nonatomic, retain) NSMutableArray *axisLabelViews;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;
- (id)axisLabelAttributes;
- (id)axisLabelValues;
- (id)axisLabelViews;
- (id)initWithOrientation:(long long)arg1 axisLabels:(id)arg2;
- (void)layoutSubviews;
- (double)minorDimensionSize;
- (long long)orientation;
- (void)setAxisLabelAttributes:(id)arg1;
- (void)setAxisLabelValues:(id)arg1;
- (void)setAxisLabelViews:(id)arg1;
- (void)setOrientation:(long long)arg1;

@end
