
@interface CMIOExtensionProxyContext : NSObject {
    int  _activeStreams;
    CMIOExtensionClient * _clientInfo;
    NSObject<OS_xpc_object> * _connection;
    <CMIOExtensionProxyContextDelegate> * _delegate;
    NSString * _description;
    NSMutableDictionary * _deviceIDsByStreamID;
    bool  _hasCameraAttribution;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _redactedDescription;
    NSObject<OS_xpc_object> * _serverConnection;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) int activeStreams;
@property (nonatomic, readonly) CMIOExtensionClient *clientInfo;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly) <CMIOExtensionProxyContextDelegate> *delegate;
@property (nonatomic, readonly) bool hasCameraAttribution;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *serverConnection;

- (void).cxx_destruct;
- (void)_addCameraAttribution:(id)arg1;
- (int)activeStreams;
- (id)clientInfo;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)handleClientMessageWithConnection:(id)arg1 message:(id)arg2;
- (void)handleServerMessageWithConnection:(id)arg1 message:(id)arg2;
- (bool)hasCameraAttribution;
- (id)initWithConnection:(id)arg1 serverConnection:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
- (void)invalidate;
- (bool)isInvalidated;
- (id)queue;
- (void)receivedSample:(id)arg1 message:(id)arg2;
- (id)redactedDescription;
- (void)sendClientInfo;
- (id)serverConnection;

@end
