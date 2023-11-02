
@protocol GEOResourceLoadOperation <NSObject, NSProgressReporting>

@required

- (void)cancel;
- (id)initWithResource:(GEOResourceInfo *)arg1 eTag:(NSString *)arg2 auditToken:(GEOApplicationAuditToken *)arg3 baseURL:(NSURL *)arg4 alternateURLs:(NSArray *)arg5 proxyURL:(NSURL *)arg6 log:(NSObject<OS_os_log> *)arg7;
- (bool)preferDirectNetworking;
- (bool)requiresWiFi;
- (void)setPreferDirectNetworking:(bool)arg1;
- (void)setRequiresWiFi:(bool)arg1;
- (void)startWithCompletionHandler:(void *)arg1 callbackQueue:(void *)arg2; // needs 2 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSData *, NSString *, NSError *, void*, NSObject<OS_dispatch_queue> *

@end
