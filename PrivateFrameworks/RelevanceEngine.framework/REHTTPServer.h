
@interface REHTTPServer : NSObject <REHTTPConnectionDelegate> {
    NSMutableArray * _connections;
    <REHTTPServerDelegate> * _delegate;
    unsigned short  _port;
    NSObject<OS_dispatch_queue> * _queue;
    struct _CFHTTPServer { } * _server;
}

@property (nonatomic, readonly) <REHTTPServerDelegate> *delegate;
@property (nonatomic, readonly) unsigned short port;

- (void).cxx_destruct;
- (bool)_valid;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (void)didCloseConnection:(struct _CFHTTPServerConnection { }*)arg1;
- (void)didOpenConnection:(struct _CFHTTPServerConnection { }*)arg1;
- (void)didRecievedError:(id)arg1;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)invalidated;
- (unsigned short)port;

@end
