
@interface CROrderedIndexSet : NSObject {
    NSMutableArray * _indexedObjects;
    NSMutableOrderedSet * _indicesSet;
    NSArray * _sourceArray;
}

@property (readonly) unsigned long long count;
@property (retain) NSMutableArray *indexedObjects;
@property (readonly) NSArray *indices;
@property (retain) NSMutableOrderedSet *indicesSet;
@property (retain) NSArray *sourceArray;

- (void).cxx_destruct;
- (void)addAllIndices;
- (void)addIndex:(unsigned long long)arg1;
- (void)addIndexSet:(id)arg1;
- (void)addIndices:(id)arg1;
- (unsigned long long)count;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)indexedObjects;
- (id)indices;
- (id)indicesSet;
- (id)initWithArray:(id)arg1;
- (id)objects;
- (void)setIndexedObjects:(id)arg1;
- (void)setIndicesSet:(id)arg1;
- (void)setSourceArray:(id)arg1;
- (id)sourceArray;
- (id)subIndexSetWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
