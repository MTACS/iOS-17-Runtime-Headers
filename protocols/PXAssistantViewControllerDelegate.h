
@protocol PXAssistantViewControllerDelegate <NSObject>

@required

- (void)assistantForAssistantViewController:(id <PXAssistantViewController>)arg1 failedWithError:(NSError *)arg2;
- (void)assistantViewController:(id <PXAssistantViewController>)arg1 dismissViewControllerAnimated:(bool)arg2;
- (void)assistantViewController:(id <PXAssistantViewController>)arg1 presentAlertWithConfiguration:(PXAlertConfiguration *)arg2 animated:(bool)arg3;
- (void)assistantViewController:(id <PXAssistantViewController>)arg1 presentViewController:(UIViewController *)arg2 animated:(bool)arg3;
- (void)assistantViewController:(id <PXAssistantViewController>)arg1 pushViewController:(UIViewController *)arg2 animated:(bool)arg3;
- (void)cancelAssistantForAssistantViewController:(id <PXAssistantViewController>)arg1;
- (void)completeAssistantForAssistantViewController:(id <PXAssistantViewController>)arg1;
- (void)stepForwardInAssistantForAssistantViewController:(id <PXAssistantViewController>)arg1;
- (void)stepForwardInAssistantForAssistantViewControllerAsCurrentViewController:(id <PXAssistantViewController>)arg1;

@end
