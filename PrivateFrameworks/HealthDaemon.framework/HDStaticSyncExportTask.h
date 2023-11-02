
@interface HDStaticSyncExportTask : HDStaticSyncTask <HDSyncSessionDelegate> {
    unsigned long long  _archiveCount;
    _HKArchiveCreator * _archiveCreator;
    unsigned long long  _batchSize;
    unsigned long long  _changesetCount;
    NSURL * _exportDirectoryURL;
    NSProgress * _exportProgress;
    NSObject<OS_dispatch_queue> * _exportQueue;
    bool  _exportToDisk;
    NSMutableSet * _syncEntityIdentifiersWithProcessedChanges;
    NSProgress * _syncSessionProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *exportDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)exportDirectoryURL;
- (id)initWithProfile:(id)arg1 options:(unsigned long long)arg2 storeIdentifier:(id)arg3 URL:(id)arg4 batchSize:(unsigned long long)arg5;
- (id)runWithCompletion:(id /* block */)arg1;
- (bool)syncSession:(id)arg1 didEndTransactionWithError:(id*)arg2;
- (void)syncSession:(id)arg1 didFinishSuccessfully:(bool)arg2 error:(id)arg3;
- (void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSessionWillBegin:(id)arg1;

@end
