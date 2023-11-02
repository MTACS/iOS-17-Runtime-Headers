
@interface NEIPC : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_xpc_object> * _listener;
    id /* block */  _messageHandler;
}

- (void).cxx_destruct;

@end
