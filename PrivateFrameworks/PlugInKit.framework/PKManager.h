
@interface PKManager : NSObject {
    PKDaemonClient * _client;
    <PKProxyFactory> * _proxyFactory;
}

@property (retain) PKDaemonClient *client;
@property (readonly) <PKProxyFactory> *proxyFactory;

+ (id)defaultManager;
+ (id)managerForUser:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)client;
- (id)containingAppForExtensionProperties:(id)arg1;
- (id)containingAppForPlugInConnectedTo:(id)arg1;
- (id)containingAppForPlugInWithPid:(int)arg1;
- (void)forceHoldPlugIn:(id)arg1 result:(id /* block */)arg2;
- (id)forceHoldPlugIn:(id)arg1 withError:(id*)arg2;
- (void)holdPlugInsInApplication:(id)arg1 result:(id /* block */)arg2;
- (id)holdPlugInsInApplication:(id)arg1 withError:(id*)arg2;
- (id)holdPlugInsWithExtensionPointName:(id)arg1 error:(id*)arg2;
- (id)holdPlugInsWithExtensionPointName:(id)arg1 platforms:(id)arg2 terminate:(bool)arg3 error:(id*)arg4;
- (void)holdPlugInsWithExtensionPointName:(id)arg1 platforms:(id)arg2 terminate:(bool)arg3 result:(id /* block */)arg4;
- (void)holdPlugInsWithExtensionPointName:(id)arg1 result:(id /* block */)arg2;
- (void)holdRequest:(id)arg1 extensionPointName:(id)arg2 platforms:(id)arg3 flags:(unsigned long long)arg4 result:(id /* block */)arg5;
- (void)holdRequest:(id)arg1 flags:(unsigned long long)arg2 result:(id /* block */)arg3;
- (id)informationForPlugInWithPid:(int)arg1;
- (id)initForService:(const char *)arg1;
- (id)initForUser:(unsigned int)arg1;
- (id)initWithDaemon:(id)arg1;
- (id)initWithDaemon:(id)arg1 proxyFactory:(id)arg2;
- (id)initWithProxyFactory:(id)arg1;
- (id)proxyFactory;
- (void)registerPlugInAtURL:(id)arg1 result:(id /* block */)arg2;
- (void)registerPlugInsInBundle:(id)arg1 result:(id /* block */)arg2;
- (void)releaseHold:(id)arg1;
- (bool)releaseHold:(id)arg1 flags:(unsigned long long)arg2 withError:(id*)arg3;
- (void)releaseHold:(id)arg1 reply:(id /* block */)arg2;
- (bool)releaseHold:(id)arg1 withError:(id*)arg2;
- (void)setClient:(id)arg1;
- (bool)terminatePlugInAtURL:(id)arg1 withError:(id*)arg2;
- (void)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 result:(id /* block */)arg3;
- (id)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 withError:(id*)arg3;
- (void)unregisterPlugInAtURL:(id)arg1 result:(id /* block */)arg2;
- (void)unregisterPlugInsInBundle:(id)arg1 result:(id /* block */)arg2;
- (void)updateExtensionStatesForPlugIns:(id)arg1 result:(id /* block */)arg2;

@end
