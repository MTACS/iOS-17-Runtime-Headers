
@protocol BNPresentingDelegate <NSObject>

@required

- (void)presenterRelinquishesVisibility:(id <BNPresenting>)arg1;
- (void)presenterRequestsVisibility:(id <BNPresenting>)arg1;

@optional

- (<BNBannerTransitioningDelegate> *)defaultTransitioningDelegateForPresenter:(id <BNPresenting>)arg1;
- (UIPanGestureRecognizer *)panGestureRecognizerForPresenter:(id <BNPresenting>)arg1;
- (struct CGPoint { double x1; double x2; })presenter:(id <BNPresenting>)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 locationForEvent:(UIEvent *)arg3 inView:(UIView *)arg4;
- (struct CGPoint { double x1; double x2; })presenter:(id <BNPresenting>)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 locationForTouch:(UITouch *)arg3 inView:(UIView *)arg4;
- (struct CGPoint { double x1; double x2; })presenter:(id <BNPresenting>)arg1 gestureRecognizer:(UIPanGestureRecognizer *)arg2 translationInView:(UIView *)arg3;
- (struct CGPoint { double x1; double x2; })presenter:(id <BNPresenting>)arg1 gestureRecognizer:(UIPanGestureRecognizer *)arg2 velocityInView:(UIView *)arg3;
- (void)presenter:(id <BNPresenting>)arg1 presentable:(id <BNPresentable>)arg2 willTransitionToSize:(struct CGSize { double x1; double x2; })arg3 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg4;
- (void)presenter:(id <BNPresenting>)arg1 willDismissPresentable:(id <BNPresentable>)arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3 userInfo:(NSDictionary *)arg4;
- (void)presenter:(id <BNPresenting>)arg1 willPresentPresentable:(id <BNPresentable>)arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3 userInfo:(NSDictionary *)arg4;
- (void)presenter:(id <BNPresenting>)arg1 willTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (double)presenterMinimumPreferredTopEdgeInset:(id <BNPresenting>)arg1;

@end
