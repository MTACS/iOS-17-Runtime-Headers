
@protocol WGWidgetDataSourceObserver <NSObject>

@required

- (void)widgetDataSource:(WGWidgetDataSource *)arg1 removeDatum:(WGWidgetDatum *)arg2;
- (void)widgetDataSource:(WGWidgetDataSource *)arg1 replaceWithDatum:(WGWidgetDatum *)arg2;

@end
