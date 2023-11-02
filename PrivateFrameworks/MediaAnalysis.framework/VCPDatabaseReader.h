
@interface VCPDatabaseReader : NSObject {
    struct sqlite3 { } * _database;
    NSString * _filepath;
    NSObject<OS_dispatch_queue> * _sqlSerialQueue;
}

+ (id)databaseForPhotoLibrary:(id)arg1;
+ (bool)shouldQueryInternalFields;

- (void).cxx_destruct;
- (int)_queryValue:(long long*)arg1 forKey:(id)arg2;
- (id)blacklistedLocalIdentifiersFromAssets:(id)arg1;
- (void)closeDatabase;
- (unsigned long long)countForTaskID:(unsigned long long)arg1 withProcessingStatus:(unsigned long long)arg2;
- (void)dealloc;
- (int)executeDatabaseBlock:(id /* block */)arg1;
- (bool)exists;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)isAssetBlacklisted:(id)arg1 blacklistDate:(id*)arg2;
- (int)openDatabase;
- (int)parseHeader:(struct sqlite3_stmt { }*)arg1 startColumn:(int)arg2 analysis:(id)arg3;
- (int)parseResults:(struct sqlite3_stmt { }*)arg1 typeColumn:(int)arg2 dataColumn:(int)arg3 results:(id)arg4;
- (id)queryAnalysesForAssets:(id)arg1 withTypes:(id)arg2;
- (id)queryAnalysisForAsset:(id)arg1;
- (id)queryAnalysisForAsset:(id)arg1 withTypes:(id)arg2;
- (id)queryAnalysisPropertiesForAsset:(id)arg1;
- (id)queryAnalysisPropertiesForAssets:(id)arg1;
- (id)queryAssetsAnalyzedSince:(id)arg1;
- (id)queryBlacklistedLocalIdentifiers;
- (id)queryFailedProcessingStatusFromAssets:(id)arg1 forTaskID:(unsigned long long)arg2;
- (int)queryHeaderForAsset:(id)arg1 analysis:(id*)arg2 assetId:(long long*)arg3;
- (int)queryHeadersForAssets:(id)arg1 analyses:(id)arg2 idMap:(id)arg3;
- (id)queryLocalIdentifiersForTaskID:(unsigned long long)arg1 withStatus:(unsigned long long)arg2;
- (int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2;
- (int)queryResultsForAssetId:(long long)arg1 withTypes:(id)arg2 analysis:(id)arg3;
- (int)queryResultsForAssets:(id)arg1 withTypes:(id)arg2 batchResults:(id)arg3;
- (int)querySchedulingHistoryRecords:(id*)arg1 forActivityID:(unsigned long long)arg2 sinceDate:(id)arg3;
- (long long)valueForKey:(id)arg1;

@end
