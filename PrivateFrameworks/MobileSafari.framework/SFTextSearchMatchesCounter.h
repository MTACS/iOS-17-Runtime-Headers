
@interface SFTextSearchMatchesCounter : NSObject <UITextSearchAggregator> {
    NSMutableOrderedSet * _allFoundRanges;
    id /* block */  _completionHandler;
    NSString * _queryString;
    bool  _valid;
}

@property (nonatomic, readonly) NSOrderedSet *allFoundRanges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allFoundRanges;
- (bool)canSkipCountingMatchesForQueryString:(id)arg1 wordMatchMethod:(long long)arg2;
- (void)finishedSearching;
- (void)foundRange:(id)arg1 forSearchString:(id)arg2 inDocument:(id)arg3;
- (id)initWithQueryString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)invalidate;
- (void)invalidateFoundRange:(id)arg1 inDocument:(id)arg2;

@end
