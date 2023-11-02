
@protocol HUTriggerEditorDelegate <NSObject, HUServiceGridViewControllerDelegate>

@required

- (void)triggerEditor:(UIViewController *)arg1 didFinishWithTriggerBuilder:(HFTriggerBuilder *)arg2;

@optional

- (void)triggerEditor:(UIViewController *)arg1 didCommitTriggerBuilder:(HFTriggerBuilder *)arg2 withError:(NSError *)arg3;
- (bool)triggerEditor:(UIViewController *)arg1 shouldCommitTriggerBuilder:(HFTriggerBuilder *)arg2;

@end
