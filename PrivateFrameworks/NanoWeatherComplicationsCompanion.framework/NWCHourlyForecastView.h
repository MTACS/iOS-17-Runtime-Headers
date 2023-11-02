
@interface NWCHourlyForecastView : UIView {
    CLKDevice * _device;
    <NWMDataFormatter> * _formatter;
    UIImageView * _middleImageView;
    UILabel * _middleLabel;
    UILabel * _timeLabel;
    UILabel * _topLabel;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic) <NWMDataFormatter> *formatter;
@property (nonatomic, readonly) UIImageView *middleImageView;
@property (nonatomic, readonly) UILabel *middleLabel;
@property (nonatomic, readonly) UILabel *timeLabel;
@property (nonatomic, readonly) UILabel *topLabel;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_applyConstraintsWithConstants:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)_applyDate:(id)arg1 timeZone:(id)arg2;
- (void)applyAccentFilters:(id)arg1;
- (void)applyEntryModel:(id)arg1 date:(id)arg2 timeZone:(id)arg3;
- (void)applyNonAccentFilters:(id)arg1;
- (void)applySimpleEntryModel:(id)arg1;
- (void)applyStyle;
- (id)device;
- (id)formatter;
- (id)initWithDevice:(id)arg1;
- (id)middleImageView;
- (id)middleLabel;
- (void)setFormatter:(id)arg1;
- (id)timeLabel;
- (id)topLabel;

@end
