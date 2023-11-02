
@interface CARInstrumentClusterURLController : NSObject <BSInvalidatable, CARAppHistoryServerToClientInterface> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    BSServiceConnection * _connection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) BSServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)connection;
- (void)fetchInstrumentClusterURLs:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)setCallbackQueue:(id)arg1;
- (void)setConnection:(id)arg1;

@end
