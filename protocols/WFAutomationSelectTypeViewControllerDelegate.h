
@protocol WFAutomationSelectTypeViewControllerDelegate <NSObject>

@required

- (void)selectTypeViewController:(WFAutomationSelectTypeViewController *)arg1 didChooseAutomationType:(unsigned long long)arg2;
- (void)selectTypeViewController:(WFAutomationSelectTypeViewController *)arg1 didChooseTrigger:(WFTrigger *)arg2;

@end
