
@interface WBUHistory : WBSHistory {
    bool  _shouldScheduleMaintenance;
}

@property (nonatomic) bool shouldScheduleMaintenance;

- (void)_addVisitedLinkForItemIfNeeded:(id)arg1 withVisitOrigin:(long long)arg2;
- (id)_createHistoryStore;
- (Class)_historyItemClass;
- (void)_removeAllVisitedLinks;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (bool)historyStoreShouldScheduleMaintenance:(id)arg1;
- (id)initWithDatabaseID:(id)arg1;
- (void)setShouldScheduleMaintenance:(bool)arg1;
- (bool)shouldScheduleMaintenance;

@end
