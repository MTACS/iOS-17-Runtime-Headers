
@interface WBSPasswordBreachResults : NSObject {
    WBSPasswordBreachContext * _context;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _recentlyBreachedPersistentIdentifiers;
    NSMutableDictionary * _resultRecordsByPersistentIdentifier;
}

- (void).cxx_destruct;
- (void)_restoreResultsFromPersistentStoreIfNecessary;
- (void)_saveResultsToPersistentStore;
- (void)addResultRecords:(id)arg1;
- (void)clearAllResultsSynchronously;
- (void)clearRecentlyBreachedResultRecords;
- (id)initWithContext:(id)arg1;
- (void)markAllCompromisedResultRecordsAsRecentlyBreached;
- (id)recentlyBreachedResultRecords;
- (id)resultRecordsForQueries:(id)arg1;

@end
