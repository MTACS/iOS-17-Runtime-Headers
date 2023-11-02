
@protocol GEOPlaceDataRequester

@required

- (void)cancelRequest:(GEOPDPlaceRequest *)arg1;
- (void)startWithRequest:(void *)arg1 traits:(void *)arg2 timeout:(void *)arg3 auditToken:(void *)arg4 throttleToken:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: GEOPDPlaceRequest *, GEOMapServiceTraits *, double, GEOApplicationAuditToken *, GEODataRequestThrottlerToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOPDPlaceResponse *, NSError *, void*

@end
