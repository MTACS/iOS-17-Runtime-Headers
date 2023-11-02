
@protocol _UIPhysicalButtonInteractionDriverReceiving <NSObject>

@required

- (_UIPhysicalButtonConfigurationSet *)_configurationSet;
- (void)_driver:(id <_UIPhysicalButtonInteractionDriving>)arg1 didCreateProposedAction:(_UIPhysicalButtonAction *)arg2;

@end
