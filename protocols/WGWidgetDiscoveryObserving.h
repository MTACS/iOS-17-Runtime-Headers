
@protocol WGWidgetDiscoveryObserving <NSObject>

@optional

- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 orderDidChangeForWidgetIdentifiers:(NSSet *)arg2;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 widgetWithIdentifier:(NSString *)arg2 shouldBecomeHiddenInGroup:(NSString *)arg3;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 widgetWithIdentifier:(NSString *)arg2 shouldBecomeVisibleInGroup:(NSString *)arg3;
- (void)widgetDiscoveryControllerSignificantWidgetsChange:(WGWidgetDiscoveryController *)arg1;

@end
