
@protocol CNQuickActionsManagerDelegate <NSObject>

@required

- (UIViewController *)actionsManager:(CNQuickActionsManager *)arg1 presentingViewControllerForAction:(CNQuickAction *)arg2;

@optional

- (void)actionsManager:(CNQuickActionsManager *)arg1 actionDidPerform:(CNQuickAction *)arg2;
- (NSArray *)actionsManager:(CNQuickActionsManager *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;

@end
