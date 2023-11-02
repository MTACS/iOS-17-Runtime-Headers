
@interface _PASLRUCacheData : NSObject {
    NSMutableDictionary * items;
    NSMutableArray * keysMRU;
}

- (void).cxx_destruct;
- (id)initWithCountLimit:(unsigned long long)arg1;

@end
