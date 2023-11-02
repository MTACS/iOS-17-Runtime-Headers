
@protocol CNQuickActionsViewDelegate <NSObject>

@required

- (UIViewController *)viewControllerForActionsView:(CNQuickActionsView *)arg1;

@optional

- (void)actionsView:(CNQuickActionsView *)arg1 didPerformAction:(CNQuickAction *)arg2;
- (void)actionsView:(CNQuickActionsView *)arg1 willShowActions:(NSMutableArray *)arg2;

@end
