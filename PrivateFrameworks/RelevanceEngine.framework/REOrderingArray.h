
@interface REOrderingArray : NSObject {
    unsigned long long  _batchCount;
    NSArray * _comparators;
    REDependencyGraph * _dependencyGraph;
    bool  _needsUpdate;
    NSArray * _orderedObjects;
}

@property (nonatomic, readonly) NSArray *comparators;
@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)_createDependenciesForObject:(id)arg1;
- (void)_performOrMarkUpdate;
- (void)_updateContentOrder;
- (void)addObject:(id)arg1;
- (id)comparators;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)initWithComparators:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)removeObject:(id)arg1;
- (void)sortAllObjects;
- (void)updateObject:(id)arg1;

@end
