
@protocol HKHealthChartFactoryViewControllerProviderClass

@required

+ (UIViewController *)createInteractiveChartViewControllerForTypeIdentifier:(NSString *)arg1 chartFactory:(HKHealthChartFactory *)arg2 applicationItems:(HKOverlayRoomApplicationItems *)arg3 displayDate:(NSDate *)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(NSUserActivity *)arg6 trendModel:(HKChartSummaryTrendModel *)arg7 additionalChartOptions:(unsigned long long)arg8;

@end
