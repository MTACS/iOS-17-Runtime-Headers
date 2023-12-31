
@protocol SKUIPhysicalCirclesDelegate <NSObject>

@optional

- (void)circleView:(SKUIPhysicalCirclesView *)arg1 didBeginLongPressForCircleAtIndex:(long long)arg2;
- (void)circleView:(SKUIPhysicalCirclesView *)arg1 didEndLongPressForCircleAtIndex:(long long)arg2;
- (void)circleView:(SKUIPhysicalCirclesView *)arg1 didTapCircleAtIndex:(long long)arg2;
- (void)circleViewReloadDidFinish:(SKUIPhysicalCirclesView *)arg1;

@end
