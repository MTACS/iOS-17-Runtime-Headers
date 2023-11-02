
@protocol WFCreateAutomationCoordinatorDelegate <NSObject>

@required

- (void)createAutomationCoordinatorDidCancel:(WFCreateAutomationCoordinator *)arg1;
- (void)createAutomationCoordinatorDidFinish:(WFCreateAutomationCoordinator *)arg1;

@end
