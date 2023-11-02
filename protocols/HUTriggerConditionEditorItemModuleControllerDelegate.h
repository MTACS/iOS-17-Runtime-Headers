
@protocol HUTriggerConditionEditorItemModuleControllerDelegate <NSObject>

@required

- (void)conditionEditorModuleController:(HUTriggerConditionEditorItemModuleController *)arg1 dismissDetailViewController:(UIViewController<HUPreloadableViewController> *)arg2;
- (void)conditionEditorModuleController:(HUTriggerConditionEditorItemModuleController *)arg1 presentDetailViewController:(UIViewController<HUPreloadableViewController> *)arg2;

@optional

- (void)conditionEditorModuleController:(HUTriggerConditionEditorItemModuleController *)arg1 didUpdateConditionCollection:(HFConditionCollection *)arg2;

@end
