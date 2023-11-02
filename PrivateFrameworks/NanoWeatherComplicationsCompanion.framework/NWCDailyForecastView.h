
@interface NWCDailyForecastView : UIView {
    CLKDevice * _device;
    NWKUILinearGaugeView * _linearGaugeView;
    UILabel * _weekdayLabel;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) NWKUILinearGaugeView *linearGaugeView;
@property (nonatomic, readonly) UILabel *weekdayLabel;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_applyLayoutConstraints:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)applyAccentFilters:(id)arg1 fraction:(double)arg2;
- (void)applyNonAccentFilters:(id)arg1 fraction:(double)arg2;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (void)layoutSubviews;
- (id)linearGaugeView;
- (void)updateWithHighlightColor:(id)arg1 fraction:(double)arg2;
- (id)weekdayLabel;

@end
