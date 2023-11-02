
@protocol NWCHourlyForecastViewBuildable <NSObject>

@required

- (NWCHourlyForecastView *)createHourlyForecastView;
- (CLKDevice *)device;
- (id)initWithDevice:(CLKDevice *)arg1;

@end
