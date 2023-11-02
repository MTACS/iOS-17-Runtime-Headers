
@interface GEOImageServiceRequester : NSObject {
    geo_isolater * _isolater;
    NSHashTable * _pendingRequests;
    NSMapTable * _requestToIdentifier;
}

+ (id)sharedRequester;

- (void).cxx_destruct;
- (bool)_finishRequest:(id)arg1;
- (unsigned long long)calculateFreeableSize;
- (void)cancelImageServiceRequest:(id)arg1;
- (id)init;
- (unsigned long long)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (void)startImageServiceRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 finished:(id /* block */)arg5 networkActivity:(id /* block */)arg6 error:(id /* block */)arg7;

@end
