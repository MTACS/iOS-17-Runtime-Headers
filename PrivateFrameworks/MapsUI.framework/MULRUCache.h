
@interface MULRUCache : NSObject {
    <MULRUCacheDelegate> * _delegate;
    NSMutableArray * _keys;
    unsigned long long  _maxSize;
    NSMutableArray * _values;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) <MULRUCacheDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long maxSize;
@property (nonatomic, readonly) NSArray *orderedKeys;
@property (nonatomic, readonly) NSArray *orderedValues;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)delegate;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (unsigned long long)maxSize;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)orderedKeys;
- (id)orderedValues;
- (void)removeObjectForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
