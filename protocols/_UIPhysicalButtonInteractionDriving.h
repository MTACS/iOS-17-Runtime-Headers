
@protocol _UIPhysicalButtonInteractionDriving <NSObject>

@required

- (long long)_driverType;
- (void)_installToViewIfNeeded:(UIView *)arg1;
- (void)_physicalButtonConfigurationsDidChange;
- (void)_uninstallFromViewIfNeeded:(UIView *)arg1;
- (id)initWithReceiver:(id <_UIPhysicalButtonInteractionDriverReceiving>)arg1;

@end
