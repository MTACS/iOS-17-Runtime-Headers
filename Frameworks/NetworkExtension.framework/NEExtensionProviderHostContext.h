
@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderHostProtocol, NEExtensionProviderProtocol> {
    <NEExtensionProviderHostDelegate> * _delegate;
    NSString * _description;
    NEProcessIdentity * _extensionProcessIdentity;
    bool  _isHostingSystemExtension;
    NEUserNotification * _notification;
    bool  _stopped;
    NSXPCConnection * _vendorConnection;
    <NEExtensionProviderProtocol> * _vendorContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) int requiredEntitlement;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)createWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dispose;
- (int)requiredEntitlement;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
- (void)sleepWithCompletionHandler:(id /* block */)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startedWithError:(id)arg1;
- (void)stopWithReason:(int)arg1;
- (void)validateWithCompletionHandler:(id /* block */)arg1;
- (void)wake;

@end
