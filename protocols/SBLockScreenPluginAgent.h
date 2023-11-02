
@protocol SBLockScreenPluginAgent <NSObject>

@required

- (void)activatePluginController:(id <SBLockScreenPluginController>)arg1;
- (void)deactivatePluginController:(id <SBLockScreenPluginController>)arg1;
- (bool)pluginController:(id <SBLockScreenPluginController>)arg1 sendAction:(SBLockScreenPluginAction *)arg2;
- (void)pluginController:(id <SBLockScreenPluginController>)arg1 updateAppearance:(id <SBLockScreenPluginAppearance>)arg2;

@end
