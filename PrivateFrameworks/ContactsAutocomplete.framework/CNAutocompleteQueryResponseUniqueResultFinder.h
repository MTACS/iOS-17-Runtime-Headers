
@interface CNAutocompleteQueryResponseUniqueResultFinder : NSObject {
    id /* block */  _duplicateResultHandler;
    NSIndexSet * _firstIndexes;
    NSDictionary * _hashIndex;
    NSMutableArray * _hashes;
    NSMutableIndexSet * _uniqueResultIndexes;
    NSMutableArray * _uniqueResults;
}

+ (id)findUniqueResults:(id)arg1 duplicateResultHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)findUniqueResults;
- (void)generateHashes;
- (void)indexHashes;
- (id)initWithResults:(id)arg1 duplicateResultHandler:(id /* block */)arg2;
- (void)removeDuplicateResults;
- (void)resolveDuplicatesWithinIndexes:(id)arg1;

@end
