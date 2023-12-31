
@protocol GEOMapServiceBatchNearbyTicket <GEOMapServiceCancellableTicket, GEOMapServiceThrottlableTicket>

@required

- (void)cancel;
- (NSString *)resultSectionHeaderForCategory:(GEOSearchCategory *)arg1;
- (void)submitWithHandler:(void *)arg1 auditToken:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSMapTable *, NSError *, void*, GEOApplicationAuditToken *, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSMapTable *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (GEOMapServiceTraits *)traits;

@end
