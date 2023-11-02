
@protocol WFWidgetGridViewDelegate <NSObject>

@required

- (void)gridView:(WFWidgetGridView *)arg1 cellDidTransitionToRunningState:(long long)arg2;
- (void)gridView:(WFWidgetGridView *)arg1 didTapCell:(WFWidgetCell *)arg2;
- (void)gridViewDidFinishLayout:(WFWidgetGridView *)arg1;

@end
