
@interface CMCaptureFrameSenderService : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableArray * _clients;
    NSObject<OS_xpc_object> * _endpoint;
    NSData * _endpointAuditToken;
    NSString * _endpointCameraUniqueID;
    int  _endpointPID;
    NSData * _endpointProxyAuditToken;
    int  _endpointProxyPID;
    NSString * _endpointType;
    NSString * _endpointUniqueID;
    NSObject<OS_xpc_object> * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _reapSendingPixelTransferSessionTimer;
    unsigned long long  _sendingPixelBufferHeight;
    unsigned int  _sendingPixelBufferPixelFormatType;
    struct __CVPixelBufferPool { } * _sendingPixelBufferPool;
    double  _sendingPixelBufferPoolAgeOutTime;
    int  _sendingPixelBufferPoolSize;
    unsigned long long  _sendingPixelBufferWidth;
    struct OpaqueVTPixelTransferSession { } * _sendingPixelTransferSession;
    struct opaqueCMFormatDescription { } * _sendingSampleBufferFormatDescription;
}

+ (void)initialize;

- (void)_addConnection:(id)arg1;
- (void)_cleanupSendingPixelBufferMachinery;
- (struct opaqueCMSampleBuffer { }*)_newSampleBufferToSendFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithEndpointType:(id)arg1;
- (id)initWithEndpointType:(id)arg1 endpointCameraUniqueID:(id)arg2;
- (id)initWithEndpointType:(id)arg1 endpointPID:(int)arg2 endpointProxyPID:(int)arg3 endpointAuditToken:(id)arg4 endpointProxyAuditToken:(id)arg5 endpointCameraUniqueID:(id)arg6;
- (int)sendFrame:(struct opaqueCMSampleBuffer { }*)arg1;

@end
