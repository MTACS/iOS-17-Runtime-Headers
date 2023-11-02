
@protocol HKInteractiveChartCurrentValueViewHandler <NSObject>

@required

- (UIView *)makeCurrentValueView;
- (void)setCurrentValueViewCallbacks:(id <HKInteractiveChartCurrentValueViewCallbacks>)arg1;
- (void)updateCurrentValueView:(UIView *)arg1 graphView:(HKGraphView *)arg2 timeScope:(long long)arg3 showInfoButton:(bool)arg4;

@end
