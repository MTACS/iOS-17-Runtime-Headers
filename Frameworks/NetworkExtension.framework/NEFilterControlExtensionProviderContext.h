
@interface NEFilterControlExtensionProviderContext : NEFilterExtensionProviderContext <NEFilterControlExtensionProviderHostProtocol, NEFilterControlExtensionProviderProtocol> {
    bool  _observing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (void)dispose;
- (id)extensionPoint;
- (void)handleNewFlow:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleReport:(id)arg1;
- (void)notifyRulesChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (Class)requiredProviderSuperClass;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;

@end
