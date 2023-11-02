
@interface HKElectrocardiogramAxisOptions : NSObject {
    UIFont * _axisLabelFont;
    UIColor * _axisLabelTextColor;
    double  _axisLineToLabelSpacing;
    double  _bottomBaselineMargin;
    UIColor * _lineColor;
    double  _lineWidth;
    bool  _scaleMetricsAutomatically;
    double  _topBaselineMargin;
}

@property (nonatomic, readonly) UIFont *axisLabelFont;
@property (nonatomic, readonly) UIColor *axisLabelTextColor;
@property (nonatomic, readonly) double axisLineToLabelSpacing;
@property (nonatomic, readonly) double bottomBaselineMargin;
@property (nonatomic, readonly) UIColor *lineColor;
@property (nonatomic, readonly) double lineWidth;
@property (nonatomic, readonly) bool scaleMetricsAutomatically;
@property (nonatomic, readonly) double topBaselineMargin;

- (void).cxx_destruct;
- (id)axisLabelFont;
- (id)axisLabelTextColor;
- (double)axisLineToLabelSpacing;
- (double)bottomBaselineMargin;
- (id)initWithAxisLabelFont:(id)arg1 axisLabelTextColor:(id)arg2 scaleMetricsAutomatically:(bool)arg3 lineColor:(id)arg4 lineWidth:(double)arg5 axisLineToLabelSpacing:(double)arg6 topBaselineMargin:(double)arg7 bottomBaselineMargin:(double)arg8;
- (id)lineColor;
- (double)lineWidth;
- (bool)scaleMetricsAutomatically;
- (double)topBaselineMargin;

@end
