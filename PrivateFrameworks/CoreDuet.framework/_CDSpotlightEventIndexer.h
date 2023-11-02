
@interface _CDSpotlightEventIndexer : NSObject {
    _CDEventIndexerContext * _context;
    _CDSpotlightEventIndexerDataSource * _dataSource;
    CSSearchableIndex * _index;
}

@property (nonatomic, retain) _CDEventIndexerContext *context;
@property (getter=isIndexing, nonatomic, readonly) bool indexing;

- (void).cxx_destruct;
- (void)beginIndexingWithBatchSize:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)context;
- (id)initWithDataSource:(id)arg1;
- (bool)isIndexing;
- (void)setContext:(id)arg1;

@end
