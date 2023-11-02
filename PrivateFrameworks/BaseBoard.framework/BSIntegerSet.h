
@interface BSIntegerSet : NSObject <NSCopying, NSMutableCopying> {
    bool  _hasZeroValue;
    NSHashTable * _hashTable;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (bool)containsValue:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateIndexesUsingBlock:(id /* block */)arg1;
- (void)enumerateRangesUsingBlock:(id /* block */)arg1;
- (void)enumerateSortedWithBlock:(id /* block */)arg1;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
