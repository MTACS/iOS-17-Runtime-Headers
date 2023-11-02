
@protocol BDSReadingHistoryServiceProtocol <NSObject, BDSReadingHistoryBackupServiceProtocol>

@required

- (void)readingHistoryClearDataWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)readingHistoryClearDate:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)readingHistoryClearDefaultsCachedDataWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)readingHistoryClearTodayWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)readingHistoryHandleSyncFileChangeWithSyncVersionInfo:(void *)arg1 updateInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: BDSCRDTModelSyncVersionInfo *, BDSReadingHistoryUpdateInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)readingHistoryIncrementWithDate:(void *)arg1 by:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSDate *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)readingHistoryReadingHistoryStateInfoWithRangeStart:(void *)arg1 rangeEnd:(void *)arg2 currentTime:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSDate *, NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BDSReadingHistoryStateInfo *, bool, void*
- (void)readingHistoryServiceStatusInfoWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BDSReadingHistoryServiceStatusInfo *, NSError *, void*

@end
