
@interface FCFeedTransformationSortBlock : FCFeedTransformationSort {
    id /* block */  _sortBlock;
}

@property (nonatomic, copy) id /* block */ sortBlock;

+ (id)transformationWithSortBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)setSortBlock:(id /* block */)arg1;
- (id /* block */)sortBlock;
- (id)transformFeedItems:(id)arg1;

@end
