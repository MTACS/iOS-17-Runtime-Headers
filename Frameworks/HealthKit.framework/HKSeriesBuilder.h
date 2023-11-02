
@interface HKSeriesBuilder : NSObject <HKSeriesBuilderClientInterface, _HKXPCExportable> {
    NSObject<OS_dispatch_queue> * _completionQueue;
    HKSeriesBuilderConfiguration * _configuration;
    NSUUID * _identifier;
    HKTaskServerProxyProvider * _proxyProvider;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    HKRetryableOperation * _retryableOperation;
    _Atomic int  _state;
    HKHealthStore * _store;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly, copy) HKSeriesBuilderConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, retain) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic, retain) HKRetryableOperation *retryableOperation;
@property long long state;
@property (nonatomic, readonly) HKHealthStore *store;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (void)configureClientInterface:(id)arg1;
+ (void)configureServerInterface:(id)arg1;
+ (id)serverInterface;
+ (id)taskServerIdentifier;

- (void).cxx_destruct;
- (id)_initWithHealthStore:(id)arg1 identifier:(id)arg2 configuration:(id)arg3;
- (void)_resourceQueue_addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)_resourceQueue_discardWithHandler:(id /* block */)arg1;
- (void)clientRemote_didChangeToState:(long long)arg1 completion:(id /* block */)arg2;
- (id)completionQueue;
- (id)configuration;
- (void)connectionInvalidated;
- (id)description;
- (void)discard;
- (id)exportedInterface;
- (void)freezeBuilderWithCompletion:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (id)proxyProvider;
- (void)recoverWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;
- (id)resourceQueue;
- (id)retryableOperation;
- (void)setProxyProvider:(id)arg1;
- (void)setRetryableOperation:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)store;

@end
