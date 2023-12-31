
@interface MSService : NSObject {
    int  _canceled;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSObject<OS_xpc_object> * _responseHandler;
    NSObject<OS_xpc_object> * _responseListener;
}

@property (getter=isCanceled, readonly) bool canceled;

- (void).cxx_destruct;
- (void)_callServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id /* block */)arg3;
- (void)_callServicesMethod:(id)arg1 arguments:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)_connection;
- (id)_createMessageForService:(id)arg1 arguments:(id)arg2 index:(long long*)arg3;
- (id)_createServiceOnQueue:(id)arg1;
- (id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id*)arg4;
- (void)_registerConnection:(id)arg1 onQueue:(id)arg2;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id /* block */)arg3;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (bool)isCanceled;
- (void)responseConnection:(id)arg1 handleError:(id)arg2;
- (void)responseConnection:(id)arg1 handleResponse:(id)arg2;
- (void)setupResponseConnectionOnQueue:(id)arg1;
- (void)start;
- (void)stop;

@end
