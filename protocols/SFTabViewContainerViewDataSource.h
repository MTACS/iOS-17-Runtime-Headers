
@protocol SFTabViewContainerViewDataSource <NSObject>

@required

- (UIView *)containerView:(SFTabViewContainerView *)arg1 childViewAtIndex:(long long)arg2;
- (long long)numberOfChildrenForContainerView:(SFTabViewContainerView *)arg1;

@optional

- (void)containerView:(SFTabViewContainerView *)arg1 dismantleChildView:(UIView *)arg2;
- (bool)containerView:(SFTabViewContainerView *)arg1 shouldDismantleChildView:(UIView *)arg2 atIndex:(long long)arg3;

@end
