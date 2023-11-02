
@interface HKHealthChartFactoryViewControllerProviderClassAdaptor : NSObject <HKHealthChartFactoryViewControllerProvider> {
    Class  _providerClass;
}

- (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 additionalChartOptions:(unsigned long long)arg8;
- (id)initWithProviderClass:(Class)arg1;

@end
