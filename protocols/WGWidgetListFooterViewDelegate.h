
@protocol WGWidgetListFooterViewDelegate <NSObject>

@optional

- (MTMaterialView *)editingMaterialViewForWidgetListFooterView:(WGWidgetListFooterView *)arg1;
- (void)widgetListFooterViewAvailableNewWidgetsUpdated:(WGWidgetListFooterView *)arg1;

@end
