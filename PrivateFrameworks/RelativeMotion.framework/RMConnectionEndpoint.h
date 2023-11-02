
@interface RMConnectionEndpoint : NSObject {
    <RMConnectionLifecycleDelegate> * _connectionDelegate;
    <RMConnectionDataDelegate> * _dataDelegate;
    NSObject<OS_xpc_object> * _messagingConnection;
    NSObject<OS_xpc_object> * _priorityBoostReplyMessage;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _streamingClientConnection;
    NSObject<OS_xpc_object> * _streamingClientListener;
    NSObject<OS_xpc_object> * _streamingServerConnection;
}

- (void).cxx_destruct;

@end
