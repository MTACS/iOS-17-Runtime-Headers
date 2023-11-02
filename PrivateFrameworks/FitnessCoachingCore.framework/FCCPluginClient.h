
@interface FCCPluginClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_pluginMessage:(unsigned long long)arg1 data:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_remoteProxy:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1;
- (void)pluginMessage:(unsigned long long)arg1 data:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)remoteInterface;

@end
