
@interface ACHAwardsKeyValueClient : NSObject <ACHAwardsKeyValueClientInterface, _HKXPCExportable> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSUUID * _identifier;
    id /* block */  _injectedErrorHandler;
    HKTaskServerProxyProvider * _proxyProvider;
    <ACHAwardsKeyValueServerInterface> * _serverProxy;
    NSObject<OS_dispatch_queue> * _serverQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, copy) id /* block */ injectedErrorHandler;
@property (nonatomic, retain) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, retain) <ACHAwardsKeyValueServerInterface> *serverProxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serverQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientQueue;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)identifier;
- (id)initWithHealthStore:(id)arg1;
- (id /* block */)injectedErrorHandler;
- (bool)protectedDataAvailable;
- (id)proxyProvider;
- (id)remoteInterface;
- (bool)removeValuesForKeys:(id)arg1 domain:(id)arg2 error:(id*)arg3;
- (bool)removeValuesForKeysInDomains:(id)arg1 error:(id*)arg2;
- (id)serverProxy;
- (id)serverQueue;
- (void)setClientQueue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInjectedErrorHandler:(id /* block */)arg1;
- (bool)setLegacyValuesWithDictionary:(id)arg1 error:(id*)arg2;
- (void)setProxyProvider:(id)arg1;
- (void)setServerProxy:(id)arg1;
- (void)setServerQueue:(id)arg1;
- (bool)setValue:(id)arg1 forKey:(id)arg2 domain:(id)arg3 error:(id*)arg4;
- (bool)setValuesWithDictionary:(id)arg1 domain:(id)arg2 error:(id*)arg3;
- (bool)setValuesWithDomainDictionary:(id)arg1 error:(id*)arg2;
- (id)valueForKey:(id)arg1 domain:(id)arg2 error:(id*)arg3;
- (id)valuesForKeys:(id)arg1 domain:(id)arg2 error:(id*)arg3;

@end
