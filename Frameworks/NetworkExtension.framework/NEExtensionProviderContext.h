
@interface NEExtensionProviderContext : NSExtensionContext <NEExtensionProviderHostProtocol, NEExtensionProviderProtocol> {
    NEConfiguration * _configuration;
    NSString * _description;
    NSXPCConnection * _hostConnection;
    <NEExtensionProviderHostProtocol> * _hostContext;
    bool  _isDisposed;
    NEProvider * _provider;
    bool  _started;
    id /* block */  _stopCompletionHandler;
    NSObject<OS_os_transaction> * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *extensionPoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class requiredProviderSuperClass;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_principalObject;
- (void)cancelWithError:(id)arg1;
- (void)completeSession;
- (void)createWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dispose;
- (void)dropProvider;
- (id)extensionPoint;
- (id)initWithProvider:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (Class)requiredProviderSuperClass;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
- (void)sleepWithCompletionHandler:(id /* block */)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startedWithError:(id)arg1;
- (void)stopWithReason:(int)arg1;
- (void)validateWithCompletionHandler:(id /* block */)arg1;
- (void)wake;

@end
