
@protocol SUUIPhysicalCirclesDelegate <NSObject>

@optional

- (void)circleView:(SUUIPhysicalCirclesView *)arg1 didBeginLongPressForCircleAtIndex:(long long)arg2;
- (void)circleView:(SUUIPhysicalCirclesView *)arg1 didEndLongPressForCircleAtIndex:(long long)arg2;
- (void)circleView:(SUUIPhysicalCirclesView *)arg1 didTapCircleAtIndex:(long long)arg2;
- (void)circleViewReloadDidFinish:(SUUIPhysicalCirclesView *)arg1;

@end
