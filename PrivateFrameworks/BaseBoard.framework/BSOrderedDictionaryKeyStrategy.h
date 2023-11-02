
@interface BSOrderedDictionaryKeyStrategy : NSObject {
    id /* block */  _keyComparator;
    long long  _limitCount;
}

@property (nonatomic, copy) id /* block */ keyComparator;
@property (nonatomic) long long limitCount;

+ (id)new;
+ (id)sortByInsertionOrder;
+ (id)sortByInsertionOrderWithEntryLimit:(long long)arg1;
+ (id)sortUsingComparator:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (id /* block */)keyComparator;
- (long long)limitCount;
- (void)setKeyComparator:(id /* block */)arg1;
- (void)setLimitCount:(long long)arg1;

@end
