
@interface NWPHContext : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_xpc_object> * _reply;
    NSObject<OS_xpc_object> * _request;
}

@property (retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly) int pid;
@property (retain) NSObject<OS_xpc_object> *reply;
@property (retain) NSObject<OS_xpc_object> *request;

- (void).cxx_destruct;
- (id)connection;
- (id)initWithRequest:(id)arg1 onConnection:(id)arg2;
- (int)pid;
- (id)reply;
- (id)request;
- (void)setConnection:(id)arg1;
- (void)setReply:(id)arg1;
- (void)setRequest:(id)arg1;

@end
