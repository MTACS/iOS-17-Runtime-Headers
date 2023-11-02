
@interface WFSimplePresentedWorkflowSettingsViewControllerDelegate : NSObject <WFWorkflowSettingsViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)settingsViewControllerWantsToKnowIfNewShortcutFlow:(id)arg1;
- (void)settingsViewControllerWantsWorkflowReload:(id)arg1;

@end
