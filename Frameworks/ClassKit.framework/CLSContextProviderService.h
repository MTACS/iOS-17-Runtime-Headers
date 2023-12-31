
@interface CLSContextProviderService : NSObject {
    NSString * _appIdentifier;
    NSString * _appName;
    _Atomic int  _connectionCount;
    NSExtension * _extension;
    CLSContextProviderExtensionContext * _extensionContext;
    CLSContextProviderExtensionHostContext * _extensionHostContext;
    NSString * _extensionIdentifier;
    NSString * _localizedAppName;
    NSArray * _mainAppContextPath;
    NSObject<OS_dispatch_queue> * _serviceConnectionQueue;
    NSUUID * _sessionUUID;
}

@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSString *extensionIdentifier;
@property (nonatomic, readonly) NSString *localizedAppName;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)appName;
- (void)connectWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (void)disconnect;
- (id)extensionIdentifier;
- (void)getMainAppContextPathWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithExtension:(id)arg1;
- (id)localizedAppName;
- (void)updateDescendantsOfContextPath:(id)arg1 completion:(id /* block */)arg2;

@end
