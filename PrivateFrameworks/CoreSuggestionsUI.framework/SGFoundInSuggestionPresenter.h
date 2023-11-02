
@interface SGFoundInSuggestionPresenter : SGSuggestionPresenter {
    <NSObject> * _contactStoreObserverToken;
    unsigned long long  _contentOptions;
    NSArray * _existingSuggestions;
    id /* block */  _filterBlock;
    bool  _loadScheduled;
    _PASLock * _lock;
    NSArray * _searchableItems;
}

@property (copy) NSArray *realtimeSuggestions;

- (void).cxx_destruct;
- (void)_loadSuggestions;
- (void)_loadedRealtimeSuggestions:(id)arg1 fromHostApp:(long long)arg2;
- (void)_reloadSuggestionsForNotification:(id)arg1;
- (void)_setNeedsToReloadSuggestionsAfter:(double)arg1;
- (void)addSuggestionsFromSearchableItems:(id)arg1 existingSuggestions:(id)arg2 mailService:(id)arg3 messageService:(id)arg4 options:(unsigned long long)arg5 filter:(id /* block */)arg6;
- (void)addSuggestionsFromSearchableItems:(id)arg1 existingSuggestions:(id)arg2 options:(unsigned long long)arg3 filter:(id /* block */)arg4;
- (void)addSuggestionsFromSearchableItems:(id)arg1 options:(unsigned long long)arg2 filter:(id /* block */)arg3;
- (void)dealloc;
- (id)formatMixedCategoriesTitle:(id)arg1;
- (id)init;
- (id)realtimeSuggestions;
- (void)reloadSuggestionsFromSearchableItems;
- (void)setMailService:(id)arg1 messageService:(id)arg2;
- (void)setRealtimeSuggestions:(id)arg1;
- (void)setRealtimeSuggestions:(id)arg1 fromHostApp:(long long)arg2;

@end
