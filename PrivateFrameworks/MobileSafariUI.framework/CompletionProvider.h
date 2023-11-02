
@interface CompletionProvider : NSObject {
    NSMutableArray * _completedStringsInPruneOrder;
    NSMutableDictionary * _completionsByString;
    <CompletionProviderDelegate> * _delegate;
    bool  _failing;
    bool  _inCompletionsForString;
}

@property (nonatomic) <CompletionProviderDelegate> *delegate;
@property (getter=isFailing, nonatomic, readonly) bool failing;

- (void).cxx_destruct;
- (void)_pruneCachedCompletions;
- (void)clearCachedCompletions;
- (id)completionsForQuery:(id)arg1;
- (id)completionsForQuery:(id)arg1 isCFSearch:(bool)arg2;
- (id)delegate;
- (void)fail;
- (id)findCompletionsForKey:(id)arg1 isCFSearch:(bool)arg2;
- (id)getKeyForQueryString:(id)arg1 isCFSearch:(bool)arg2;
- (id)init;
- (bool)isFailing;
- (unsigned long long)maximumCachedCompletionCount;
- (void)setCompletions:(id)arg1 forString:(id)arg2;
- (void)setCompletions:(id)arg1 forString:(id)arg2 isCFSearch:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setQueryToComplete:(id)arg1;

@end
