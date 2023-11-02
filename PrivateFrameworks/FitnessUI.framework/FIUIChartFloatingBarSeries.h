
@interface FIUIChartFloatingBarSeries : FIUIChartSeries {
    UIColor * _barColor;
    NSMutableArray * _barLabelBottomPoints;
    NSMutableArray * _barLabelTopPoints;
    NSMutableArray * _barLabels;
    NSArray * _barRects;
    double  _cornerRadius;
    NSDictionary * _labelAttributes;
    UIColor * _outlineColor;
    double  _outlineWidth;
}

@property (nonatomic, retain) UIColor *barColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) NSDictionary *labelAttributes;
@property (nonatomic, retain) UIColor *outlineColor;
@property (nonatomic) double outlineWidth;

- (void).cxx_destruct;
- (void)_loadFromDataSet;
- (id)barColor;
- (double)cornerRadius;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)labelAttributes;
- (void)layoutSubviews;
- (id)outlineColor;
- (double)outlineWidth;
- (void)setBarColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setLabelAttributes:(id)arg1;
- (void)setOutlineColor:(id)arg1;
- (void)setOutlineWidth:(double)arg1;

@end
