
@interface PXGComponent : NSObject {
    PXGMutableComponentDataStore * _mutableDataStore;
    long long  _nestedChanges;
    <PXGComponentObserver> * _observer;
    PXGMutableComponentDataStore * _previousDataStore;
}

@property (nonatomic, readonly) PXGComponentDataStore *dataStore;
@property (nonatomic, readonly) PXGMutableComponentDataStore *mutableDataStore;
@property (nonatomic) <PXGComponentObserver> *observer;
@property (nonatomic, readonly) PXGMutableComponentDataStore *previousDataStore;

+ (unsigned long long)elementSize;
+ (bool)shouldDiffForChanges;

- (void).cxx_destruct;
- (void)cleanupUnusedObjects;
- (id)dataStore;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)mutableDataStore;
- (id)observer;
- (void)performChanges:(id /* block */)arg1;
- (id)previousDataStore;
- (void)setObserver:(id)arg1;
- (void)willDestroyEntities:(const struct { unsigned int x1; }*)arg1 count:(long long)arg2;

@end
