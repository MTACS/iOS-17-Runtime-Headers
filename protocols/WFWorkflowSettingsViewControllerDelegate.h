
@protocol WFWorkflowSettingsViewControllerDelegate <NSObject>

@required

- (bool)settingsViewControllerWantsToKnowIfNewShortcutFlow:(UIViewController *)arg1;
- (void)settingsViewControllerWantsWorkflowReload:(UIViewController *)arg1;

@end
