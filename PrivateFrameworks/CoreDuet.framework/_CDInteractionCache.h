
@interface _CDInteractionCache : NSObject {
    NSCountedSet * _conversationCandidates;
    id /* block */  _filterBlock;
    _CDInteractionStore * _interactionStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _minCacheSize;
    NSMutableDictionary * _mostRecentInteractionsByTaxonomyAndIdentifier;
    NSMutableArray * _mutableInteractions;
    bool  _needsRefetch;
    NSPredicate * _predicate;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _size;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) id /* block */ filterBlock;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;
@property (nonatomic, readonly, copy) NSArray *interactions;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) unsigned long long size;

- (void).cxx_destruct;
- (void)_cacheInteractions:(id)arg1;
- (void)_countConversationIDsForInteraction:(id)arg1 deleted:(bool)arg2;
- (void)_deleteInteractions:(id)arg1;
- (void)_forceRefetch;
- (id)_init;
- (void)_invalidate;
- (void)_rebuildMostRecentInteractions;
- (void)_refetch;
- (void)_updateMostRecentInteractionsWithInteraction:(id)arg1 deleted:(bool)arg2;
- (void)cacheInteractionsForTesting:(id)arg1;
- (bool)containsUniqueCacheCandidate:(id)arg1;
- (void)debounceRefetch;
- (void)deleteInteractionsForTesting:(id)arg1;
- (id /* block */)filterBlock;
- (id)init;
- (id)initForTesting;
- (id)initWithInteractionStore:(id)arg1 size:(unsigned long long)arg2 queryPredicate:(id)arg3 filterBlock:(id /* block */)arg4;
- (id)interactionStore;
- (id)interactions;
- (void)interactionsDeleted:(id)arg1;
- (void)interactionsRecorded:(id)arg1;
- (id)mostRecentInteractionForCandidateIdentifier:(id)arg1;
- (id)mostRecentInteractionForCandidateIdentifier:(id)arg1 direction:(long long)arg2;
- (id)mostRecentInteractionForCandidateIdentifier:(id)arg1 direction:(long long)arg2 mechanism:(long long)arg3;
- (id)predicate;
- (unsigned long long)size;
- (id)uniqueConversationCandidates;

@end
