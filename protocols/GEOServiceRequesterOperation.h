
@protocol GEOServiceRequesterOperation <NSObject>

@required

- (void)cancel;
- (<GEOServiceRequesterOperation> *)initWithRequest:(void *)arg1 traits:(void *)arg2 auditToken:(void *)arg3 config:(void *)arg4 throttleToken:(void *)arg5 options:(void *)arg6 willSendRequestHandler:(void *)arg7 validationHandler:(void *)arg8 completionHandler:(void *)arg9; // needs 9 arg types, found 30: PBRequest *, GEOMapServiceTraits *, GEOApplicationAuditToken *, <GEOServiceRequestConfiguring> *, GEODataRequestThrottlerToken *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, PBRequest *, void*, void*, id /* block */, void*, NSError *, id /* block */, PBCodable *, void*, id /* block */, void*, void, id /* block */, PBCodable *, NSError *, void*
- (void)start;

@optional

- (void)_recordAnalyticsDataForResponse:(PBCodable *)arg1;

@end
