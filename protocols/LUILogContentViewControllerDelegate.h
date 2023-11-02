
@protocol LUILogContentViewControllerDelegate <NSObject>

@required

- (void)logContentViewController:(LUILogContentViewController *)arg1 didSelectDateForLog:(NSDate *)arg2;
- (void)logContentViewController:(LUILogContentViewController *)arg1 didSelectLogOptionWithTimeInterval:(double)arg2;
- (NSDate *)logContentViewControllerLogEndDate:(LUILogContentViewController *)arg1;
- (NSDate *)logContentViewControllerLogStartDate:(LUILogContentViewController *)arg1;

@end
