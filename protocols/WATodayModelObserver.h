
@protocol WATodayModelObserver <NSObject>

@required

- (void)todayModel:(WATodayModel *)arg1 forecastWasUpdated:(WAForecastModel *)arg2;
- (void)todayModelWantsUpdate:(WATodayModel *)arg1;

@end
