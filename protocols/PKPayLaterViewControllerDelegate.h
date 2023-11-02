
@protocol PKPayLaterViewControllerDelegate <NSObject>

@required

- (NSArray *)navigationControllerViewControllers;
- (NSString *)pageTag;
- (void)popViewControllerAnimated:(bool)arg1;
- (void)pushViewController:(UIViewController *)arg1 animated:(bool)arg2;
- (void)reportAnalyticsEvent:(NSDictionary *)arg1;

@end
