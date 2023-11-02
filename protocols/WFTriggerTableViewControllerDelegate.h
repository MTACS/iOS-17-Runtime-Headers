
@protocol WFTriggerTableViewControllerDelegate <NSObject>

@required

- (void)triggerTableViewController:(WFTriggerTableViewController *)arg1 didFinishWithAnySelected:(bool)arg2 orSelectedOptions:(NSArray *)arg3;
- (void)triggerTableViewControllerDidCancel:(WFTriggerTableViewController *)arg1;

@end
