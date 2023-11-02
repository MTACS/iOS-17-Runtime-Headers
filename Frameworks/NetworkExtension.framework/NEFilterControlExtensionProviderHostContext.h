
@interface NEFilterControlExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterControlExtensionProviderHostProtocol, NEFilterControlExtensionProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)handleNewFlow:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleReport:(id)arg1;
- (void)notifyRulesChanged;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;

@end
