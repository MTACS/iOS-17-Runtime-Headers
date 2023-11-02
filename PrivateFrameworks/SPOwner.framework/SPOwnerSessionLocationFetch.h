
@interface SPOwnerSessionLocationFetch : NSObject <SPLocationFetchClientXPCProtocol> {
    SPLocationFetchContext * _lastContext;
    id /* block */  _locationFetchSessionInvalidationBlock;
    id /* block */  _locationUpdates;
    <SPOwnerSessionXPCProtocol> * _proxy;
    unsigned long long  _retryCount;
    FMXPCSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SPLocationFetchContext *lastContext;
@property (nonatomic, copy) id /* block */ locationFetchSessionInvalidationBlock;
@property (nonatomic, copy) id /* block */ locationUpdates;
@property (nonatomic, retain) <SPOwnerSessionXPCProtocol> *proxy;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic, retain) FMXPCSession *session;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (double)_decayedWaitIntervalForRetryCount:(unsigned long long)arg1;
- (id)init;
- (void)interruptionHandler:(id)arg1;
- (void)invalidationHandler:(id)arg1;
- (id)lastContext;
- (id /* block */)locationFetchSessionInvalidationBlock;
- (void)locationForContext:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)locationUpdates;
- (id)proxy;
- (void)receivedUpdatedLocation:(id)arg1;
- (unsigned long long)retryCount;
- (id)session;
- (void)setInvalidationBlock:(id /* block */)arg1;
- (void)setLastContext:(id)arg1;
- (void)setLocationFetchSessionInvalidationBlock:(id /* block */)arg1;
- (void)setLocationUpdateBlock:(id /* block */)arg1;
- (void)setLocationUpdates:(id /* block */)arg1;
- (void)setProxy:(id)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setSession:(id)arg1;
- (void)subscribeAndFetchLocationForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)unsubscribeLocationUpdatesWithCompletion:(id /* block */)arg1;

@end
