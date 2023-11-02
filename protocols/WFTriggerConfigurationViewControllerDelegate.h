
@protocol WFTriggerConfigurationViewControllerDelegate <NSObject>

@required

- (void)triggerConfigurationViewController:(WFTriggerConfigurationViewController *)arg1 didFinishWithTrigger:(WFTrigger *)arg2;

@optional

- (void)triggerConfigurationViewController:(WFTriggerConfigurationViewController *)arg1 didUpdateCriteriaForTrigger:(WFTrigger *)arg2;

@end
