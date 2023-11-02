
@interface ENAdvertisementDatabase : NSObject {
    struct { struct { unsigned char x_1_1_1[16]; } x1; struct { unsigned char x_2_1_1[4]; } x2; double x3; unsigned int x4; unsigned short x5; unsigned short x6; BOOL x7; BOOL x8; bool x9; unsigned char x10; } * _advertisementInsertionCache;
    unsigned int  _advertisementInsertionCacheCount;
    bool  _advertisementInsertionCacheOverflowed;
    unsigned int  _advertisementInsertionIndex;
    ENAdvertisementSQLiteStore * _centralStore;
    unsigned long long  _currentStoreType;
    NSString * _databaseFolderPath;
    unsigned long long  _droppedAdvertisementCount;
    id /* block */  _errorMetricReporter;
    ENQueryFilter * _inlineQueryFilter;
    unsigned long long  _previousStoreFullAlertTimestamp;
    double  _storageFullAlertInterval;
    ENAdvertisementSQLiteStore * _temporaryStore;
}

@property (nonatomic, readonly) unsigned long long currentStoreType;
@property (nonatomic, readonly) unsigned long long droppedAdvertisementCount;
@property (nonatomic, retain) ENQueryFilter *inlineQueryFilter;
@property (nonatomic) double storageFullAlertInterval;
@property (nonatomic, readonly) NSNumber *storedAdvertisementCount;
@property (nonatomic, readonly) bool temporaryStoresPresent;

+ (bool)purgeAllStoresInPath:(id)arg1;

- (void).cxx_destruct;
- (id)advertisementsBufferMatchingDailyKeys:(id)arg1 attenuationThreshold:(unsigned char)arg2 timestampTolerance:(double)arg3;
- (id)beaconCountMetricsWithStartDate:(id)arg1 endDate:(id)arg2 windowDuration:(double)arg3;
- (unsigned int)cacheRecordCount;
- (bool)cloneDatabaseTo:(id)arg1;
- (void)closeAllStores;
- (id)createQuerySessionWithAttenuationThreshold:(unsigned char)arg1 queue:(id)arg2 error:(id*)arg3;
- (id)currentStore;
- (unsigned long long)currentStoreType;
- (void)dealloc;
- (void)displayStorageFullAlert;
- (unsigned long long)droppedAdvertisementCount;
- (bool)flushCache;
- (id)init;
- (id)initWithDatabaseFolderPath:(id)arg1 cacheCount:(unsigned long long)arg2;
- (id)initWithDatabaseFolderPath:(id)arg1 cacheCount:(unsigned long long)arg2 errorMetricReporter:(id /* block */)arg3;
- (id)inlineQueryFilter;
- (id)matchingAdvertisementBufferForRPIBuffer:(id)arg1 exposureKeys:(id)arg2;
- (bool)mergeStores:(id)arg1;
- (bool)mergeStoresFromFolderPath:(id)arg1;
- (bool)mergeTemporaryStores;
- (bool)openCentralStoreAndReturnError:(id*)arg1;
- (bool)openStoreAndReturnError:(id*)arg1;
- (bool)openTemporaryStore;
- (bool)purgeAdvertismentsOlderThan:(double)arg1;
- (bool)purgeAdvertismentsSeenBeforeDate:(id)arg1;
- (bool)purgeAllStoresInActiveDatabasePath;
- (id)queryFilterWithBufferSize:(unsigned long long)arg1 hashCount:(unsigned long long)arg2 attenuationThreshold:(unsigned char)arg3;
- (void)reportErrorMetric:(unsigned int)arg1;
- (void)reportStoreError:(id)arg1;
- (bool)saveContactTracingAdvertisement:(id)arg1;
- (void)setInlineQueryFilter:(id)arg1;
- (void)setStorageFullAlertInterval:(double)arg1;
- (double)storageFullAlertInterval;
- (id)storedAdvertisementCount;
- (bool)switchToCentralStore;
- (bool)temporaryStoresPresent;

@end
