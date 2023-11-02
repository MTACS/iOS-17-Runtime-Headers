
@interface NRRegistryClient : NRRegistry {
    unsigned long long  _backoffDuration;
    <NRNSXPCConnectionProtocol> * _connection;
    int  _devicesUpdateCounterNotifyToken_check;
    int  _devicesUpdateCounterNotifyToken_dispatch;
    NSMutableDictionary * _diffIndexObservers;
    unsigned long long  _lastDevicesUpdateCounterNotifyTokenValue;
    bool  _optimizeGetState;
    bool  _outstandingRegistryQuery;
    NSMutableArray * _registryQueryCompletionBlockEntries;
    unsigned long long  _tokenValue;
}

@property (nonatomic, readonly, retain) <NRNSXPCConnectionProtocol> *connection;
@property (nonatomic, readonly) unsigned long long devicesUpdateCounter;
@property (nonatomic, readonly, retain) <NRNSXPCConnectionProtocol> *rawConnection;

+ (Class)proxyClass;
+ (Class)xpcConnectionClass;

- (void).cxx_destruct;
- (void)_connectToDaemon;
- (void)_grabRegistryWithReadBlock:(id /* block */)arg1;
- (void)_grabRegistryWithWriteBlockAsync:(id /* block */)arg1;
- (void)_queryDataAsyncIfNeededWithBlock:(id /* block */)arg1;
- (void)_warnAboutMissingEntitlement;
- (id)addDiffIndexObserverWithWriteBlock:(id /* block */)arg1;
- (id)connection;
- (bool)daemonIdle;
- (unsigned long long)devicesUpdateCounter;
- (void)grabRegistryWithReadBlock:(id /* block */)arg1;
- (void)grabRegistryWithReadBlockAsync:(id /* block */)arg1;
- (void)grabRegistryWithWriteBlockAsync:(id /* block */)arg1;
- (id)initWithParameters:(id)arg1;
- (void)invalidate;
- (id)rawConnection;
- (void)removeDiffIndexObserver:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)syncGrabRegistryWithReadBlock:(id /* block */)arg1;

@end
