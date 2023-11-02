
@interface FPProgressManager : NSObject {
    FPOneToManyWeakMap * _copyProgressPerItemIDs;
    NSMapTable * _downloadProgressPerItemIDs;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _uploadProgressPerItemIDs;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)_progressForItem:(id)arg1 usingProgressMap:(id)arg2;
- (void)_resolveURLForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)attachProgressToItemsIfNeeded:(id)arg1;
- (id)copyProgressForItem:(id)arg1;
- (id)downloadProgressForItem:(id)arg1;
- (id)init;
- (void)registerCopyProgress:(id)arg1 forItemID:(id)arg2;
- (id)removeCopyProgress:(id)arg1;
- (void)removeCopyProgressForItemID:(id)arg1;
- (void)removeDownloadProgressForItemID:(id)arg1;
- (id)uploadProgressForItem:(id)arg1;

@end
