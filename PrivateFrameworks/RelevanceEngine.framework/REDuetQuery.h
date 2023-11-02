
@interface REDuetQuery : NSObject {
    _DKQuery * _query;
    id /* block */  _transformBlock;
}

@property (nonatomic) long long offset;
@property (nonatomic, retain) _DKQuery *query;
@property (nonatomic, copy) id /* block */ transformBlock;

- (void).cxx_destruct;
- (long long)offset;
- (id)query;
- (void)setOffset:(long long)arg1;
- (void)setQuery:(id)arg1;
- (void)setTransformBlock:(id /* block */)arg1;
- (id /* block */)transformBlock;

@end
