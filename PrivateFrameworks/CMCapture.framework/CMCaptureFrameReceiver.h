
@interface CMCaptureFrameReceiver : NSObject {
    NSObject<OS_xpc_object> * _connection;
    bool  _connectionIsValid;
    NSData * _endpointAuditToken;
    int  _endpointPID;
    NSData * _endpointProxyAuditToken;
    int  _endpointProxyPID;
    NSString * _endpointUniqueID;
    id /* block */  _frameReceiverHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSData *endpointAuditToken;
@property (readonly) int endpointPID;
@property (readonly, copy) NSData *endpointProxyAuditToken;
@property (readonly) int endpointProxyPID;
@property (readonly, copy) NSString *endpointUniqueID;

+ (id)availableFrameSenderEndpointsByPID;
+ (void)initialize;

- (void)dealloc;
- (id)endpointAuditToken;
- (int)endpointPID;
- (id)endpointProxyAuditToken;
- (int)endpointProxyPID;
- (id)endpointUniqueID;
- (id)initWithFrameSenderServerEndpoint:(id)arg1 frameReceiverHandler:(id /* block */)arg2;

@end
