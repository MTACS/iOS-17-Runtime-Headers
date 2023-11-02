
@interface GEORequestCounterLocalProxy : NSObject <GEORequestCounterProtocol> {
    GEORequestCounterPersistence * _persistence;
}

@property (nonatomic) bool countersEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearCounters;
- (bool)countersEnabled;
- (id)externalRequestCounterTicketForType:(id)arg1 subtype:(id)arg2 source:(id)arg3 appId:(id)arg4;
- (void)externalRequestsCount:(id /* block */)arg1;
- (void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(id /* block */)arg2 completionQueue:(id)arg3;
- (void)fetchRoutePreloadSessionsFrom:(id)arg1 completion:(id /* block */)arg2 completionQueue:(id)arg3;
- (void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 bytesDownloaded:(unsigned long long)arg7;
- (id)init;
- (id)initWithPersistence:(id)arg1;
- (void)placeCacheGetCounts:(unsigned long long)arg1 forApp:(id)arg2 inTimeRange:(id)arg3 ofType:(int)arg4 handler:(id /* block */)arg5;
- (void)placeCacheRegisterCacheResult:(unsigned char)arg1 forApp:(id)arg2 requestType:(int)arg3 timestamp:(id)arg4;
- (void)readProactiveTileDownloadsSince:(id)arg1 handler:(id /* block */)arg2;
- (void)readRequestLogsDuring:(id)arg1 handler:(id /* block */)arg2;
- (void)readRequestsPerAppDuring:(id)arg1 handler:(id /* block */)arg2;
- (void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(bool)arg4 at:(id)arg5;
- (void)recordRoutePreloadSessionAt:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5;
- (id)requestCounterTicketForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 auditToken:(id)arg2 traits:(id)arg3;
- (void)setCountersEnabled:(bool)arg1;
- (void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2;

@end
