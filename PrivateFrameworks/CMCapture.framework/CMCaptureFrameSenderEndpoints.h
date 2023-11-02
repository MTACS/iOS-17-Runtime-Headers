
@interface CMCaptureFrameSenderEndpoints : NSObject {
    NSMutableDictionary * _frameSenderEndpoints;
}

@property (nonatomic, readonly, retain) NSDictionary *endpointsByPID;

- (bool)_pruneStalePIDsFromDictionary;
- (bool)addEndpoint:(id)arg1 endpointUniqueID:(id)arg2 endpointType:(id)arg3 endpointPID:(int)arg4 endpointProxyPID:(int)arg5 endpointAuditToken:(id)arg6 endpointProxyAuditToken:(id)arg7 endpointCameraUniqueID:(id)arg8;
- (id)createXPCArrayOfFrameSenderEndpoints;
- (void)dealloc;
- (id)endpointsByPID;
- (id)init;
- (id)initWithXPCArrayOfFrameSenderEndpoints:(id)arg1;
- (bool)removeAllEndpointsWithPID:(int)arg1;
- (bool)removeAllEndpointsWithPID:(int)arg1 pruneStalePIDs:(bool)arg2;
- (bool)removeEndpointWithUniqueID:(id)arg1;

@end
