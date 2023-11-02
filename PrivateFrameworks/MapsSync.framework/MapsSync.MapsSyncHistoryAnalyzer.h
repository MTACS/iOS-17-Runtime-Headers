
@interface MapsSync.MapsSyncHistoryAnalyzer : _TtCs12_SwiftObject {
    void _callbackData;
    void _context;
    void _contextsToMerge;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _historyStartDate;
    void _historyToken;
    void _notificationContextDidSaveToken;
    void kHistoryChangesPurgeChunk;
    void kHistoryExpirationDays;
    void kHistoryExpirationSeconds;
    void kMaxHistoryChangesCount;
    void kMaxHistoryDatabasePercentage;
    void kMaxHistoryDatabaseSizeBytes;
    void kMaxHistoryDatabaseSizeMegabytes;
}

- (void)notificationPersistentStoreRemoteChange:(id)arg1;

@end
