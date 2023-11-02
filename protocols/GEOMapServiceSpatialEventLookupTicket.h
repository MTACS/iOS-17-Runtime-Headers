
@protocol GEOMapServiceSpatialEventLookupTicket <NSObject>

@required

- (void)cancel;
- (NSArray *)parameters;
- (void)submitWithHandler:(void *)arg1 auditToken:(void *)arg2 queue:(void *)arg3; // needs 3 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOSpatialEventLookupResult *, NSError *, void*, GEOApplicationAuditToken *, NSObject<OS_dispatch_queue> *
- (void)submitWithHandler:(void *)arg1 queue:(void *)arg2; // needs 2 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOSpatialEventLookupResult *, NSError *, void*, NSObject<OS_dispatch_queue> *
- (GEOMapServiceTraits *)traits;

@end
