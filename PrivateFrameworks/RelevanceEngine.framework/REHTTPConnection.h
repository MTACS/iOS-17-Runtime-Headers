
@interface REHTTPConnection : NSObject <NSStreamDelegate> {
    struct _CFHTTPServerConnection { } * _connection;
    <REHTTPConnectionDelegate> * _delegate;
    NSMapTable * _pendingRequests;
    NSMutableArray * _pendingResponse;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) struct _CFHTTPServerConnection { }*connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REHTTPConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)_handleCompleteRequest:(id)arg1 stream:(id)arg2 error:(id)arg3;
- (void)_sendResponse:(id)arg1;
- (void)close;
- (struct _CFHTTPServerConnection { }*)connection;
- (void)dealloc;
- (id)delegate;
- (void)didCompleteResponse:(struct _CFHTTPServerResponse { }*)arg1 error:(id)arg2;
- (void)didRecieveError:(id)arg1;
- (void)didRecieveRequest:(struct _CFHTTPServerRequest { }*)arg1;
- (id)initWithConnection:(struct _CFHTTPServerConnection { }*)arg1;
- (void)invalidate;
- (void)invalidated;
- (bool)isValid;
- (bool)open;
- (void)setDelegate:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
