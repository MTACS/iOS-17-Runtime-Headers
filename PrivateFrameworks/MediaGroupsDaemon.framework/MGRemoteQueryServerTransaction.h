
@interface MGRemoteQueryServerTransaction : NSObject {
    NSObject<OS_nw_connection> * _connection;
    <MGRemoteQueryServerTransactionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSError * _error;
    NSObject<MGRemoteQueryServerHandlerProtocol> * _handler;
    NSURLRequest * _request;
    NSObject<OS_nw_content_context> * _responseContext;
    unsigned long long  _state;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSObject<OS_nw_connection> *connection;
@property (nonatomic, readonly) <MGRemoteQueryServerTransactionDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSObject<MGRemoteQueryServerHandlerProtocol> *handler;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic, retain) NSObject<OS_nw_content_context> *responseContext;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (void)_delegateNotifyActivityOccurred;
- (void)_delegateNotifyInvalidated;
- (void)_delegateNotifyTimeoutInterval:(unsigned long long)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleNWError:(id)arg1;
- (id)_handlerForRequest:(id)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)_prepareConnection;
- (void)_requestParse:(id)arg1;
- (void)_requestProcess:(id)arg1;
- (void)_requestRead;
- (bool)_requestValidate;
- (void)_responseAppend:(id)arg1;
- (void)_responseEnd;
- (void)_responseHandlePayloadFromHandler:(id)arg1 error:(id)arg2;
- (void)_responseObtainPayloadFromHandler;
- (void)_responseStart;
- (void)_updateState:(unsigned long long)arg1;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)dispatchQueue;
- (id)error;
- (id)handler;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3;
- (id)request;
- (id)responseContext;
- (void)setError:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponseContext:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTransaction:(id)arg1;
- (unsigned long long)state;
- (id)transaction;

@end
