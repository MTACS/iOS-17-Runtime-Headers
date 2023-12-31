
@interface BRCItemTransmogrifier : NSObject {
    NSMutableArray * _pendingRenames;
    NSObject<OS_dispatch_source> * _pendingRenamesTimer;
    NSMutableDictionary * _pendingTransmogirifcations;
    NSOperationQueue * _queue;
    BRCAccountSession * _session;
}

- (void).cxx_destruct;
- (void)_finishDirectoryToPackageTransmogrification:(id)arg1 relpath:(id)arg2;
- (double)_renameDelayForZone:(id)arg1;
- (double)_renameItem:(id)arg1;
- (void)_renameItems;
- (void)_scheduleRenameAfter:(double)arg1 onQueue:(id)arg2;
- (bool)addOperation:(id)arg1 forItem:(id)arg2;
- (id)initWithSession:(id)arg1;
- (id)queue;
- (void)removeOperationsForItemGlobalID:(id)arg1;
- (void)scheduleBouncedDirectoryRename:(id)arg1;
- (void)scheduleDirectoryToPackageTransmogrification:(id)arg1 absolutePath:(id)arg2;

@end
