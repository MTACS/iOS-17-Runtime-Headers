
@interface _UIPhysicalButtonProxyInteractionBSActionDriver : NSObject <_UIPhysicalButtonProxyInteractionBSActionDriving> {
    <_UIPhysicalButtonProxyInteractionDriverReceiving> * _proxyReceiver;
}

@property (nonatomic, readonly) long long _driverType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_driverType;
- (void)_handleBSAction:(id)arg1;
- (void)_installToViewIfNeeded:(id)arg1;
- (void)_physicalButtonConfigurationsDidChange;
- (void)_uninstallFromViewIfNeeded:(id)arg1;
- (id)init;
- (id)initWithReceiver:(id)arg1;

@end
