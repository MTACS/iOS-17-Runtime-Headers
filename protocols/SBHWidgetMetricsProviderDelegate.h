
@protocol SBHWidgetMetricsProviderDelegate <NSObject>

@required

- (<SBIconListLayoutProvider> *)listLayoutProvider;

@optional

- (<SBIconListLayoutProvider> *)widgetMetricsProvider:(SBHWidgetMetricsProvider *)arg1 listLayoutProviderForScreenType:(unsigned long long)arg2;

@end
