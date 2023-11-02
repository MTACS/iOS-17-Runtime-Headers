
@interface _DRCConnectionState : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    bool  _isClosed;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, readonly) bool isClosed;

+ (id)sharedConnectionState;

- (void).cxx_destruct;
- (void)cleanupState;
- (id)connection;
- (id)connectionQueue;
- (id)init;
- (bool)isClosed;
- (bool)sendMessage:(id)arg1;
- (id)sendMessageWithReplySync:(id)arg1;

@end
