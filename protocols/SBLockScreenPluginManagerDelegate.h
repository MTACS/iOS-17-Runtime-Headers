
@protocol SBLockScreenPluginManagerDelegate <NSObject>

@required

- (void)pluginManager:(SBLockScreenPluginManager *)arg1 activePluginDidChange:(SBLockScreenPlugin *)arg2;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 didLoadPlugin:(SBLockScreenPlugin *)arg2;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 displayedPluginDidChangeFromPlugin:(SBLockScreenPlugin *)arg2 toPlugin:(SBLockScreenPlugin *)arg3;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 displayedPluginDidUpdateAppearance:(SBLockScreenPlugin *)arg2;
- (bool)pluginManager:(SBLockScreenPluginManager *)arg1 plugin:(SBLockScreenPlugin *)arg2 handleAction:(SBLockScreenPluginAction *)arg3;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 willUnloadPlugin:(SBLockScreenPlugin *)arg2;

@end
