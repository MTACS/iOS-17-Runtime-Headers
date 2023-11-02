
@protocol NWCDailyForecastViewBuildable <NSObject>

@required

- (NWCDailyForecastView *)createDailyForecastView;
- (CLKDevice *)device;
- (id)initWithDevice:(CLKDevice *)arg1;

@end
