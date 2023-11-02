
@protocol WFAutomationSummaryViewControllerDelegate <NSObject>

@required

- (void)automationSummaryViewController:(WFAutomationSummaryViewController *)arg1 didFinishWithTrigger:(WFConfiguredTriggerRecord *)arg2;

@optional

- (void)automationSummaryViewController:(WFAutomationSummaryViewController *)arg1 editTrigger:(WFConfiguredTriggerRecord *)arg2;
- (void)automationSummaryViewController:(WFAutomationSummaryViewController *)arg1 editWorkflow:(WFWorkflow *)arg2;
- (void)automationSummaryViewControllerChooseShortcut:(WFAutomationSummaryViewController *)arg1;
- (void)automationSummaryViewControllerDidCancel:(WFAutomationSummaryViewController *)arg1;

@end
