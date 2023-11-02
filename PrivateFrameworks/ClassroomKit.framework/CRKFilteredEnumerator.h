
@interface CRKFilteredEnumerator : NSEnumerator {
    NSEnumerator * _enumerator;
    id /* block */  _filterBlock;
}

@property (nonatomic, readonly) NSEnumerator *enumerator;
@property (nonatomic, readonly) id /* block */ filterBlock;

- (void).cxx_destruct;
- (id)enumerator;
- (id /* block */)filterBlock;
- (id)initWithEnumerator:(id)arg1 filterBlock:(id /* block */)arg2;
- (id)nextObject;
- (bool)shouldRejectItem:(id)arg1;

@end
