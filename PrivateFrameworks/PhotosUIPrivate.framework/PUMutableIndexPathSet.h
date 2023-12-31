
@interface PUMutableIndexPathSet : PUIndexPathSet {
    NSMutableSet * _indexPaths;
}

- (void).cxx_destruct;
- (void)addIndexPath:(id)arg1;
- (bool)containsIndexPath:(id)arg1;
- (long long)count;
- (id)description;
- (void)enumerateIndexPathsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)removeAllIndexPaths;
- (void)removeIndexPath:(id)arg1;
- (void)setIndexPathSet:(id)arg1;

@end
