
@interface CMCaptureFrameSenderEndpointsServerSideSingleton : NSObject

+ (bool)addEndpoint:(id)arg1 endpointUniqueID:(id)arg2 endpointType:(id)arg3 endpointPID:(int)arg4 endpointProxyPID:(int)arg5 endpointAuditToken:(id)arg6 endpointProxyAuditToken:(id)arg7 endpointCameraUniqueID:(id)arg8;
+ (id)createXPCArrayOfFrameSenderEndpoints;
+ (id)endpointsByPID;
+ (bool)removeAllEndpointsWithPID:(int)arg1;
+ (bool)removeEndpointWithUniqueID:(id)arg1;

@end
