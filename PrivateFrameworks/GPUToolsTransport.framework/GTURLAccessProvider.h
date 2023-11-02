
@interface GTURLAccessProvider : NSObject <GTURLAccessProvider> {
    NSString * _deviceUDID;
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _registeredURLs;
    <GTRemoteConnectionProvider> * _remoteConnectionProvider;
    NSObject<OS_dispatch_queue> * _urlProviderQueue;
}

- (void).cxx_destruct;
- (void)copyIdentifier:(id)arg1 toDevice:(id)arg2 allowLocalURL:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)copyIdentifier:(id)arg1 toDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithDeviceUDID:(id)arg1 remoteConnectionProvider:(id)arg2;
- (id)makeURL:(id)arg1;
- (void)securityScopedURLFromSandboxID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)transferIdentifier:(id)arg1 toDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)urlForPath:(id)arg1;

@end
