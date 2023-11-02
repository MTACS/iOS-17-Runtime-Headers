
@interface BookDataStore.BDSSyncEnginePipeline : NSObject <BCCloudDataSyncProvider, BookDataStore.BDSSyncEngineSaltChangeObserver> {
    void _hasPendingModifications;
    void currentModifyBatchResponse;
    void dataMapper;
    void delegate;
    void kChangedRecordsBatchSize;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void observer;
    void recordType;
    void scheduleSyncBlock;
    void stateQueue;
    void subscribers;
    void workQueue;
    void zoneID;
}

- (void).cxx_destruct;
- (void)fetchRecordForRecordID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 25: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, BOOL, out const double, unsigned int, long double, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, BOOL, out const double, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (id)initWithRecordType:(id)arg1 zoneName:(id)arg2 delegate:(id)arg3;
- (id)initWithRecordType:(id)arg1 zoneName:(id)arg2 delegate:(id)arg3 dataMapper:(id)arg4;
- (id)privacyDelegate;
- (void)saltUpdatedWithSaltVersionIdentifier:(id)arg1;
- (void)signalSyncToCK;
- (void)startSyncToCKWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
