
@protocol SCKDatabaseStoreCoordinator

@required

- (void)addObserver:(id <SCKDatabaseStoreCoordinatorObserver>)arg1;
- (void)readWithAccessor:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SCKDatabaseStore> *, void*
- (void)readZone:(void *)arg1 withAccessor:(void *)arg2; // needs 2 arg types, found 7: SCKZoneSchema *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SCKZoneStore> *, void*
- (void)reloadWithAccessor:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SCKDatabaseStore> *, bool, void*
- (void)removeObserver:(id <SCKDatabaseStoreCoordinatorObserver>)arg1;
- (<SCKDatabaseStore> *)underlyingStore;
- (void)writeWithAccessor:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SCKDatabaseStore> *, void*
- (void)writeZone:(void *)arg1 withAccessor:(void *)arg2; // needs 2 arg types, found 7: SCKZoneSchema *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SCKZoneStore> *, void*

@end
