
@protocol WFWidgetCellDelegate <NSObject>

@required

- (void)widgetCellDidTransitionToState:(long long)arg1;
- (void)widgetCellWasTapped:(WFWidgetCell *)arg1;

@end
