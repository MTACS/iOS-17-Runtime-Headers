
@interface CSVoiceIdXPCConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_handleClientError:(id)arg1 client:(id)arg2;
- (void)_handleClientEvent:(id)arg1;
- (void)_handleClientMessage:(id)arg1 client:(id)arg2;
- (void)_sendReplyMessageWithResult:(bool)arg1 error:(id)arg2 event:(id)arg3 client:(id)arg4;
- (void)activateConnection;
- (id)connection;
- (id)initWithConnection:(id)arg1;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;

@end
