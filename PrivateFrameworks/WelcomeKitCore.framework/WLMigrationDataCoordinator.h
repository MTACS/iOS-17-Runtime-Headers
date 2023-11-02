
@interface WLMigrationDataCoordinator : NSObject {
    bool  _doneSent;
    NSString * _downloadsPath;
    bool  _stashDataLocally;
}

@property (nonatomic, copy) NSString *downloadsPath;
@property (nonatomic) bool stashDataLocally;

+ (bool)_allowSegmentedDownloads;
+ (unsigned long long)downloadSegmentSize;
+ (unsigned long long)segmentCountForItemSize:(unsigned long long)arg1 segmentSize:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_downloadFileInMultipleSegmentsFromSource:(id)arg1 forMigrator:(id)arg2 summary:(id)arg3 account:(id)arg4 itemSize:(unsigned long long)arg5 segmentCompletion:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)_downloadSegmentsFromSource:(id)arg1 forMigrator:(id)arg2 startingAtByteLocation:(unsigned long long)arg3 ofSummary:(id)arg4 account:(id)arg5 itemSize:(unsigned long long)arg6 toFileHandle:(id)arg7 segmentCompletion:(id /* block */)arg8 completion:(id /* block */)arg9;
- (void)_fetchAccountsFromSource:(id)arg1 forMigrator:(id)arg2 statistics:(id)arg3 completion:(id /* block */)arg4;
- (void)_fetchSummariesFromSource:(id)arg1 forMigrator:(id)arg2 account:(id)arg3 statistics:(id)arg4 completion:(id /* block */)arg5;
- (id)_recordSummaryForMigrator:(id)arg1 withInfo:(id)arg2 account:(id)arg3;
- (void)downloadDataFromSource:(id)arg1 forMigrator:(id)arg2 summary:(id)arg3 account:(id)arg4 completion:(id /* block */)arg5;
- (void)downloadFileFromSource:(id)arg1 forMigrator:(id)arg2 summary:(id)arg3 account:(id)arg4 segmentCompletion:(id /* block */)arg5 completion:(id /* block */)arg6;
- (id)downloadsPath;
- (void)fetchAccountsAndSummariesFromSource:(id)arg1 forMigrator:(id)arg2 statistics:(id)arg3 accountsRequestDurationBlock:(id /* block */)arg4 summariesRequestDurationBlock:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)importDataForMigrator:(id)arg1 fromProvider:(id /* block */)arg2 forSummaries:(id)arg3 summaryStart:(id /* block */)arg4 summaryCompletion:(id /* block */)arg5;
- (id)init;
- (void)setDownloadsPath:(id)arg1;
- (void)setStashDataLocally:(bool)arg1;
- (bool)stashDataLocally;
- (void)updateSource:(id)arg1 withProgress:(double)arg2 remainingTime:(double)arg3 completion:(id /* block */)arg4;

@end
