
@interface NEExtensionAppProxyProviderContext : NEExtensionTunnelProviderContext <NEExtensionAppProxyProviderHostProtocol, NEExtensionAppProxyProviderProtocol> {
    unsigned int  _delegateInterfaceIndex;
    struct _NEFlowDirector { } * _director;
    NSObject<OS_dispatch_queue> * _flowQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)cancelWithError:(id)arg1;
- (id)extensionPoint;
- (void)openFlowDivertControlSocketWithCompletionHandler:(id /* block */)arg1;
- (Class)requiredProviderSuperClass;
- (void)setDelegateInterface:(unsigned int)arg1;
- (void)setInitialFlowDivertControlSocket:(id)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopWithReason:(int)arg1;

@end
