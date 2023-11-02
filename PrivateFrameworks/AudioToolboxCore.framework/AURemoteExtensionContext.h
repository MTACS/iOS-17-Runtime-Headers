
@interface AURemoteExtensionContext : NSExtensionContext {
    AURemoteHost * _host;
    bool  _isRunningInProcess;
    bool  _isUIExtension;
    AUAudioUnitViewService * _viewService;
}

@property (nonatomic) AUAudioUnitViewService *viewService;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (bool)conformsToProtocol:(id)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)iOSViewController;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)open:(id /* block */)arg1;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)setViewService:(id)arg1;
- (id)viewService;

@end
