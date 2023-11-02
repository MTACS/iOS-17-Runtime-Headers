
@protocol AutomationOverlayViewControllerDelegate <NSObject>

@optional

- (void)automationOverlayController:(AutomationOverlayViewController *)arg1 didChangeAllowsUserInteraction:(bool)arg2;
- (void)automationOverlayControllerDidCancelAutomation:(AutomationOverlayViewController *)arg1;
- (void)automationOverlayControllerDidDisableAutomation:(AutomationOverlayViewController *)arg1;
- (bool)automationOverlayControllerShouldAllowUserInteraction:(AutomationOverlayViewController *)arg1;

@end
