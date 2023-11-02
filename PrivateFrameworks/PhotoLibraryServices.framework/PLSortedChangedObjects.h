
@interface PLSortedChangedObjects : NSObject {
    NSArray * _changedObjects;
    unsigned long long  _count;
    id * _sortedObjectPointers;
}

@property (nonatomic, readonly) NSArray *changedObjects;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) id*sortedObjectPointers;

- (void).cxx_destruct;
- (id)changedObjects;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithChangedObjects:(id)arg1;
- (id*)sortedObjectPointers;

@end
