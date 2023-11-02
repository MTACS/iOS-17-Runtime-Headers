
@protocol WFTriggerComposeViewControllerDelegate <WFComposeViewControllerDelegate>

@required

- (void)triggerComposeViewController:(WFTriggerComposeViewController *)arg1 didFinishWithWorkflow:(WFWorkflow *)arg2;
- (void)triggerComposeViewControllerDidCancel:(WFTriggerComposeViewController *)arg1;

@end
