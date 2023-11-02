
@interface MFAATokenManager : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (bool)isTokenValidForFeatures:(unsigned long long)arg1 token:(id)arg2;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (void)confirmActivationForAuthToken:(id)arg1 withUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)confirmActivationForToken:(id)arg1 withUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)requestActivationForAuthToken:(id)arg1 withUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestActivationForToken:(id)arg1 withUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestMetadataForAuthToken:(id)arg1 withUUID:(id)arg2 requestedLocale:(id)arg3 requestInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)requestMetadataForToken:(id)arg1 withUUID:(id)arg2 requestedLocale:(id)arg3 requestInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
