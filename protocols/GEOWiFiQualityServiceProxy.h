
@protocol GEOWiFiQualityServiceProxy <NSObject>

@required

- (void)cancelRequestId:(NSString *)arg1;
- (void)submitWiFiQualityServiceRequest:(void *)arg1 requestId:(void *)arg2 auditToken:(void *)arg3 completionQueue:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: GEOWiFiQualityServiceRequest *, NSString *, GEOApplicationAuditToken *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOWiFiQualityServiceResponse *, NSError *, void*
- (void)submitWiFiQualityTileLoadForKey:(void *)arg1 eTag:(void *)arg2 requestId:(void *)arg3 auditToken:(void *)arg4 completionQueue:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 14: NSString *, NSString *, NSString *, GEOApplicationAuditToken *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSData *, NSError *, void*

@end
