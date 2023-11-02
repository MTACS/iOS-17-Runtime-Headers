
@protocol CSXPCConnectionDelegate <NSObject>

@optional

- (void)CSXPCConnectionReceivedClientError:(CSXPCConnection *)arg1 clientError:(NSObject<OS_xpc_object> *)arg2 client:(NSObject<OS_xpc_object> *)arg3;
- (void)handleXPCMessage:(NSObject<OS_xpc_object> *)arg1 messageBody:(NSObject<OS_xpc_object> *)arg2 client:(NSObject<OS_xpc_object> *)arg3;

@end
