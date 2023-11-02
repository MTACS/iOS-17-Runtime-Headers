
@interface CyclerCommandHandler : NSObject <WBDatabaseLockAcquisitorDelegate, WBSCyclerTestTarget> {
    NSMutableArray * _blocksAwaitingDatabaseLock;
    WebBookmarkCollection * _bookmarkCollection;
    WBDatabaseLockAcquisitor * _bookmarkDatabaseLockAcquisitor;
    bool  _isWaitingToAcquireLock;
    WBSDistributedNotificationObserver * _syncAgentNotificationObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_adjustInsertionIndex:(unsigned long long)arg1 forInsertionIntoListWithIdentifier:(int)arg2;
- (id)_cyclerRepresentationOfBookmark:(id)arg1;
- (bool)_isBookmarkSyncEnabled;
- (bool)_isSpecialBookmark:(id)arg1;
- (void)_startMonitoringSyncStatusWithCompletionHandler:(id /* block */)arg1;
- (void)_tryToAcquireDatabaseLockWithCompletionHandler:(id /* block */)arg1;
- (void)clearBookmarksWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)createBookmarkListWithTitle:(id)arg1 inListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)createBookmarkWithTitle:(id)arg1 url:(id)arg2 inListWithIdentifier:(id)arg3 atIndex:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)databaseLockAcquisitor:(id)arg1 acquiredLock:(bool)arg2;
- (void)deleteBookmarkWithIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)fetchTopLevelBookmarkList:(id /* block */)arg1;
- (id)init;
- (id)initWithBookmarkCollection:(id)arg1;
- (void)moveBookmarkWithIdentifier:(id)arg1 intoListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)setTitle:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)setURL:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)syncBookmarksWithCompletionHandler:(id /* block */)arg1;

@end
