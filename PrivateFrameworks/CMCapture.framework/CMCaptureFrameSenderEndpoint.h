
@interface CMCaptureFrameSenderEndpoint : NSObject {
    NSObject<OS_xpc_object> * _endpoint;
    NSData * _endpointAuditToken;
    NSString * _endpointCameraUniqueID;
    int  _endpointPID;
    NSData * _endpointProxyAuditToken;
    int  _endpointProxyPID;
    NSString * _endpointType;
    NSString * _endpointUniqueID;
}

@property (readonly, copy) NSObject<OS_xpc_object> *endpoint;
@property (readonly, copy) NSData *endpointAuditToken;
@property (readonly, copy) NSString *endpointCameraUniqueID;
@property (readonly) int endpointPID;
@property (readonly, copy) NSData *endpointProxyAuditToken;
@property (readonly) int endpointProxyPID;
@property (readonly, copy) NSString *endpointType;
@property (readonly, copy) NSString *endpointUniqueID;

- (void)dealloc;
- (id)description;
- (id)endpoint;
- (id)endpointAuditToken;
- (id)endpointCameraUniqueID;
- (int)endpointPID;
- (id)endpointProxyAuditToken;
- (int)endpointProxyPID;
- (id)endpointType;
- (id)endpointUniqueID;
- (id)initWithDictionary:(id)arg1;

@end
