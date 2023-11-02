
@protocol GEORequestCounterProtocol <NSObject>

@required

- (void)clearCounters;
- (bool)countersEnabled;
- (<GEOExternalRequestCounterTicket> *)externalRequestCounterTicketForType:(NSString *)arg1 subtype:(NSString *)arg2 source:(NSString *)arg3 appId:(NSString *)arg4;
- (void)externalRequestsCount:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchAnalyticsHandlingDataFrom:(void *)arg1 completion:(void *)arg2 completionQueue:(void *)arg3; // needs 3 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*, NSObject<OS_dispatch_queue> *
- (void)fetchRoutePreloadSessionsFrom:(void *)arg1 completion:(void *)arg2 completionQueue:(void *)arg3; // needs 3 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*, NSObject<OS_dispatch_queue> *
- (void)finishedProactiveTileDownloadForIdentifier:(NSString *)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 bytesDownloaded:(unsigned long long)arg7;
- (void)placeCacheGetCounts:(void *)arg1 forApp:(void *)arg2 inTimeRange:(void *)arg3 ofType:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 11: unsigned long long, NSString *, NSDateInterval *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)placeCacheRegisterCacheResult:(unsigned char)arg1 forApp:(NSString *)arg2 requestType:(int)arg3 timestamp:(NSDate *)arg4;
- (void)readProactiveTileDownloadsSince:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)readRequestLogsDuring:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)readRequestsPerAppDuring:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(NSDate *)arg3;
- (void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(NSDate *)arg3;
- (void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(NSDate *)arg3;
- (void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(bool)arg4 at:(NSDate *)arg5;
- (void)recordRoutePreloadSessionAt:(NSDateInterval *)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5;
- (<GEORequestCounterTicket> *)requestCounterTicketForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 auditToken:(GEOApplicationAuditToken *)arg2 traits:(GEOMapServiceTraits *)arg3;
- (void)setCountersEnabled:(bool)arg1;
- (void)startedProactiveTileDownloadForIdentifier:(NSString *)arg1 policy:(unsigned char)arg2;

@end
