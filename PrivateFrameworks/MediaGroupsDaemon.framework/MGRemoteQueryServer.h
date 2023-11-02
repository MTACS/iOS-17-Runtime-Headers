
@interface MGRemoteQueryServer : NSObject <MGRemoteQueryServerClientDelegate> {
    NSArray * _clients;
    <MGRemoteQueryServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSError * _error;
    NSString * _homeHash;
    bool  _invalidated;
    NSObject<OS_nw_listener> * _listener;
}

@property (nonatomic, retain) NSArray *clients;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <MGRemoteQueryServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *homeHash;
@property (nonatomic) bool invalidated;
@property (nonatomic, retain) NSObject<OS_nw_listener> *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientAdd:(id)arg1;
- (id)_clientFind:(id)arg1;
- (void)_clientRemove:(id)arg1;
- (unsigned int)_connectionLimit;
- (void)_handleNewConnection:(id)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (id)_prepareListenerAdvertisement;
- (void)_prepareListenerHTTP:(id)arg1;
- (void)_prepareListenerHandlers;
- (id)_prepareListenerIdentity;
- (id)_prepareListenerParameters;
- (id /* block */)_prepareListenerTLS;
- (void)_startListener;
- (unsigned long long)_transactionCount;
- (unsigned long long)_unsafe_transactionCount;
- (void)_updateConnectionLimit;
- (void)clientInvalidated:(id)arg1;
- (void)clientLostTransaction:(id)arg1;
- (id)clients;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)dispatchQueue;
- (id)error;
- (id)homeHash;
- (id)initWithHomeHash:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3;
- (bool)invalidated;
- (id)listener;
- (void)setClients:(id)arg1;
- (void)setError:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setListener:(id)arg1;

@end
