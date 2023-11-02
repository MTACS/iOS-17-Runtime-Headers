
@interface STWebUsageController : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_asynchronousProxyWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteAllWebHistoryForApplication:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteAllWebHistoryForApplication:(id)arg1 profileIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebHistoryDuringInterval:(id)arg1 application:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebHistoryDuringInterval:(id)arg1 application:(id)arg2 profileIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteWebHistoryForDomain:(id)arg1 application:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebHistoryForDomain:(id)arg1 application:(id)arg2 profileIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteWebHistoryForURL:(id)arg1 application:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebHistoryForURL:(id)arg1 application:(id)arg2 profileIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteWebHistoryForURLs:(id)arg1 application:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebHistoryForURLs:(id)arg1 application:(id)arg2 profileIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)xpcConnection;

@end
