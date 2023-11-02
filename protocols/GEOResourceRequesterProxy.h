
@protocol GEOResourceRequesterProxy <NSObject>

@required

- (void)fetchResources:(void *)arg1 force:(void *)arg2 manifestConfiguration:(void *)arg3 auditToken:(void *)arg4 signpostID:(void *)arg5 queue:(void *)arg6 handler:(void *)arg7; // needs 7 arg types, found 13: NSArray *, bool, GEOResourceManifestConfiguration *, GEOApplicationAuditToken *, unsigned long long, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
