
@protocol SKUIClientProductPageViewController <NSObject>

@required

- (void)didFinish;
- (void)didFinishDismissal;
- (void)didFinishWithResult:(NSNumber *)arg1;
- (void)didReceiveTitle:(NSString *)arg1;
- (void)loadDidFinishWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)presentPageWithRequest:(NSDictionary *)arg1 animated:(NSNumber *)arg2;
- (void)promptForStarRating;
- (void)setStatusBarHidden:(NSNumber *)arg1 withAnimation:(NSNumber *)arg2;
- (void)setStatusBarStyle:(NSNumber *)arg1 animated:(NSNumber *)arg2;

@end
