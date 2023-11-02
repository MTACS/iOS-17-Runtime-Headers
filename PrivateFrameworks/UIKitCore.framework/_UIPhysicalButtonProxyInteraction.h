
@interface _UIPhysicalButtonProxyInteraction : _UIPhysicalButtonInteraction <_UIPhysicalButtonProxyInteractionDriverReceiving> {
    <_UIPhysicalButtonProxyInteractionDelegate> * _proxyDelegate;
}

@property (nonatomic, readonly, copy) _UIPhysicalButtonConfigurationSet *_configurationSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_driver:(id)arg1 didCreateProposedAction:(id)arg2;
- (id)_driverClasses;
- (bool)_isProxyInteraction;
- (void)_proxyDriver:(id)arg1 didReceiveBSAction:(id)arg2;
- (id)init;

@end
