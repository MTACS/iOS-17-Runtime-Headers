
@interface GEORequestCounterPersistence : NSObject {
    GEOSQLiteDB * _db;
    bool  _enabled;
    double  _maxAge;
}

@property (nonatomic) bool enabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_purgeOlderThan:(id)arg1;
- (void)_recordAnalylticsCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 withFxn:(int (*)arg4;
- (void)_tearDown;
- (void)addPlaceCacheResultForApp:(id)arg1 timestamp:(id)arg2 requestTypeRaw:(int)arg3 result:(unsigned char)arg4;
- (void)countsDuring:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dealloc;
- (bool)enabled;
- (void)externalRequestsCount:(id /* block */)arg1;
- (void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(id /* block */)arg2 completionQueue:(id)arg3;
- (void)fetchRoutePreloadSessionsFrom:(id)arg1 completion:(id /* block */)arg2 completionQueue:(id)arg3;
- (void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 bytesDownloaded:(unsigned long long)arg7;
- (void)getPlaceCacheResultsInTimeRange:(id)arg1 rawCounts:(id /* block */)arg2 complete:(id /* block */)arg3;
- (void)incrementExternalForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 xmitBytes:(long long)arg4 recvBytes:(long long)arg5 usedInterfaces:(unsigned long long)arg6 requestType:(id)arg7 requestSubtype:(id)arg8 source:(id)arg9;
- (void)incrementForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 requestType:(int)arg4 result:(unsigned char)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7 usedInterfaces:(unsigned long long)arg8 withCompletion:(id /* block */)arg9;
- (id)init;
- (id)initWithDBFilePath:(id)arg1 maxCountAge:(double)arg2;
- (void)logsDuring:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)purgeAllCounts;
- (void)readProactiveTileDownloadsSince:(id)arg1 handler:(id /* block */)arg2;
- (void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(bool)arg4 at:(id)arg5;
- (void)recordRoutePreloadSessionAt:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5;
- (void)setEnabled:(bool)arg1;
- (void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2;

@end
