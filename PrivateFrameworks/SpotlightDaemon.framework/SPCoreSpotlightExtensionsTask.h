
@interface SPCoreSpotlightExtensionsTask : NSObject {
    id /* block */  _completionBlock;
    id /* block */  _filterBlock;
    id /* block */  _performBlock;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, copy) id /* block */ filterBlock;
@property (nonatomic, copy) id /* block */ performBlock;

- (void).cxx_destruct;
- (void)_performWithExtensionsEnumerator:(id)arg1 completionBlock:(id /* block */)arg2;
- (id /* block */)completionBlock;
- (id /* block */)filterBlock;
- (id /* block */)performBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setFilterBlock:(id /* block */)arg1;
- (void)setPerformBlock:(id /* block */)arg1;
- (void)start;

@end
