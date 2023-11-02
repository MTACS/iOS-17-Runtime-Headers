
@interface SXComponentInsertionCacheItem : NSObject {
    <SXComponentInserter> * _inserter;
    NSArray * _results;
    <SXComponentInsertionCacheValidator> * _validator;
}

- (void).cxx_destruct;

@end
