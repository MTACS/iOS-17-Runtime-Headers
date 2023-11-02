
@protocol SUUIPhysicalCirclesDataSource <NSObject>

@required

- (UIView *)circlesView:(SUUIPhysicalCirclesView *)arg1 circleForIndex:(long long)arg2;
- (long long)numberOfCirclesInCircleView:(SUUIPhysicalCirclesView *)arg1;

@end
