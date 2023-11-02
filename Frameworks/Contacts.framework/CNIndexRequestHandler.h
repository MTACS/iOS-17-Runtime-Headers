
@interface CNIndexRequestHandler : NSObject {
    unsigned long long  _batchSize;
    CNIndexClientState * _clientState;
    CNContactStore * _contactStore;
    <CNCSSearchableIndex> * _index;
    bool  _isFullSyncNeeded;
    <CNSpotlightIndexingLogger> * _logger;
}

- (void).cxx_destruct;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 searchableIndex:(id)arg2 logger:(id)arg3 batchSize:(unsigned long long)arg4;
- (void)performIndexing;
- (void)reindexAllSearchableItems;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1;
- (id)verifyIndexLoggingSummary:(bool)arg1 error:(id*)arg2;

@end
