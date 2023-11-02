
@protocol NCNotificationListSupplementaryViewsContainingDelegate <NSObject>

@optional

- (void)supplementaryViewsContainer:(id <NCNotificationListSupplementaryViewsContaining>)arg1 requestsCancelTouches:(bool)arg2 onSupplementaryViewController:(UIViewController *)arg3;
- (void)supplementaryViewsContainer:(id <NCNotificationListSupplementaryViewsContaining>)arg1 requestsCancelTouchesOnAllSupplementaryViewControllers:(bool)arg2;

@end
