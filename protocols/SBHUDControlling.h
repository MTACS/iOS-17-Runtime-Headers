
@protocol SBHUDControlling <NSObject>

@required

- (UIViewController<SBHUDViewControlling> *)HUDViewController;
- (void)dismiss;
- (void)dismissAnimated:(bool)arg1;
- (NSString *)identifier;
- (void)invalidateDismissalTimer;
- (bool)isDismissalScheduled;
- (bool)isDismissed;
- (bool)isDismissing;
- (bool)isPresented;
- (bool)isPresenting;
- (bool)isVisible;
- (void)presentWithDismissalInterval:(double)arg1;
- (void)presentWithDismissalInterval:(double)arg1 animated:(bool)arg2;
- (void)rescheduleDismissalTimer;
- (void)scheduleDismissalTimer;

@end
