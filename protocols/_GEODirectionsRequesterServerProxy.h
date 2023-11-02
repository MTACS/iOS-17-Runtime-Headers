
@protocol _GEODirectionsRequesterServerProxy <NSObject>

@required

- (void)cancelRequest:(GEODirectionsRequest *)arg1;
- (void)startRequest:(void *)arg1 traits:(void *)arg2 auditToken:(void *)arg3 useBackgroundURL:(void *)arg4 requestPriority:(void *)arg5 callbackQueue:(void *)arg6 finished:(void *)arg7 networkActivity:(void *)arg8 error:(void *)arg9; // needs 9 arg types, found 25: GEODirectionsRequest *, GEOMapServiceTraits *, GEOApplicationAuditToken *, bool, NSNumber *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEODirectionsResponse *, void*, id /* block */, void*, void, id /* block */, bool, void*, id /* block */, void*, void, id /* block */, NSError *, GEODirectionsError *, void*

@end
