
@interface SCWFauxDatabaseStoreCoordinator : NSObject <SCWDatabaseStoreCoordinator> {
    NSObject<OS_dispatch_queue> * _queue;
    <SCWDatabaseStore> * _store;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <SCWDatabaseStore> *store;
@property (nonatomic, readonly) <SCWDatabaseStore> *underlyingStore;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)initWithDatabaseStore:(id)arg1;
- (id)queue;
- (void)readWithAccessor:(id /* block */)arg1;
- (void)readZone:(id)arg1 withAccessor:(id /* block */)arg2;
- (void)reloadWithAccessor:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (id)underlyingStore;
- (void)writeWithAccessor:(id /* block */)arg1;
- (void)writeZone:(id)arg1 withAccessor:(id /* block */)arg2;

@end
