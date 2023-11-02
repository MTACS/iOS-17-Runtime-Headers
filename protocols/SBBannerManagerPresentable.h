
@protocol SBBannerManagerPresentable <BNPresentable>

@optional

- (bool)shouldAcquireWindowLevelAssertion;
- (bool)shouldDismissForReason:(NSString *)arg1;
- (bool)shouldDismissForReason:(NSString *)arg1 outReason:(out id*)arg2;

@end
