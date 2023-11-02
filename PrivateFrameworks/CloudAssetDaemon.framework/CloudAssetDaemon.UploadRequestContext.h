
@interface CloudAssetDaemon.UploadRequestContext : CloudAssetDaemon.RequestContext {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  storageReferenceContinuation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  trackingNumberContinutation;
}

@end
