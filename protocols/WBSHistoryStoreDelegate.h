
@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>

@required

- (void)historyStore:(id <WBSHistoryStore>)arg1 didAddVisits:(NSArray *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didPrepareToDeleteWithDeletionPlan:(WBSHistoryDeletionPlan *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveHighLevelDomains:(NSArray *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveHostnames:(NSArray *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveItems:(NSArray *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveVisits:(NSArray *)arg2;
- (WBSHistoryItem *)historyStore:(id <WBSHistoryStore>)arg1 itemForURLString:(NSString *)arg2 createIfNeeded:(bool)arg3;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id <WBSHistoryStore>)arg1;
- (bool)historyStoreShouldCheckDatabaseIntegrity:(id <WBSHistoryStore>)arg1;
- (void)historyStoreWasCleared:(id <WBSHistoryStore>)arg1;

@optional

- (bool)historyStoreShouldScheduleMaintenance:(id <WBSHistoryStore>)arg1;

@end
