
@interface SFAnalyticsSQLiteStore : SFSQLite

@property (readonly) NSArray *allEvents;
@property (readonly) NSArray *hardFailures;
@property (retain) NSString *metricsAccountID;
@property (readonly) NSArray *rockwells;
@property (readonly) NSArray *samples;
@property (readonly) NSArray *softFailures;
@property (retain) NSDate *uploadDate;

+ (id)storeWithPath:(id)arg1 schema:(id)arg2;

- (void)addEventDict:(id)arg1 toTable:(id)arg2;
- (void)addEventDict:(id)arg1 toTable:(id)arg2 timestampBucket:(unsigned int)arg3;
- (void)addRockwellDict:(id)arg1 userinfo:(id)arg2 toTable:(id)arg3 timestampBucket:(unsigned int)arg4;
- (void)addSample:(id)arg1 forName:(id)arg2;
- (id)allEvents;
- (void)clearAllData;
- (void)dealloc;
- (long long)hardFailureCountForEventType:(id)arg1;
- (id)hardFailures;
- (void)incrementHardFailureCountForEventType:(id)arg1;
- (void)incrementSoftFailureCountForEventType:(id)arg1;
- (void)incrementSuccessCountForEventType:(id)arg1;
- (id)metricsAccountID;
- (void)removeAllSamplesForName:(id)arg1;
- (id)rockwells;
- (id)samples;
- (void)setMetricsAccountID:(id)arg1;
- (void)setUploadDate:(id)arg1;
- (long long)softFailureCountForEventType:(id)arg1;
- (id)softFailures;
- (long long)successCountForEventType:(id)arg1;
- (id)summaryCounts;
- (bool)tryToOpenDatabase;
- (id)uploadDate;

@end
