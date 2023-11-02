
@interface ICDirectSharedListeningConnectionController : ICSharedListeningConnectionController <MSVQRConnectionDelegate> {
    MSVTaskAssertion * _assertion;
    MSVQRConnection * _connection;
    ICLiveLinkQRConnectionDataSource * _dataSource;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    ICSharedListeningConnectionReport * _report;
    long long  _state;
}

@property (nonatomic, retain) MSVTaskAssertion *assertion;
@property (nonatomic, retain) MSVQRConnection *connection;
@property (nonatomic, readonly) ICLiveLinkQRConnectionDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) ICSharedListeningConnectionReport *report;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleQRDataSourceError:(id)arg1;
- (id)assertion;
- (id)connection;
- (void)connection:(id)arg1 didEndWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)connectionDidStart:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegateQueue;
- (id)initWithSessionIdentifier:(id)arg1 identity:(id)arg2 bundleID:(id)arg3;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)report;
- (void)sendMessage:(id)arg1;
- (void)setAssertion:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setReport:(id)arg1;
- (void)setState:(long long)arg1;
- (void)start;
- (long long)state;
- (void)stop;

@end
