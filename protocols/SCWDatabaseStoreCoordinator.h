
@protocol SCWDatabaseStoreCoordinator

@required

- (void)addObserver:(id <SCWDatabaseStoreCoordinatorObserver>)arg1;
- (void)readWithAccessor:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SCWDatabaseStore> *, void*
- (void)readZone:(void *)arg1 withAccessor:(void *)arg2; // needs 2 arg types, found 7: SCWZoneSchema *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SCWZoneStore> *, void*
- (void)reloadWithAccessor:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SCWDatabaseStore> *, bool, void*
- (void)removeObserver:(id <SCWDatabaseStoreCoordinatorObserver>)arg1;
- (<SCWDatabaseStore> *)underlyingStore;
- (void)writeWithAccessor:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SCWDatabaseStore> *, void*
- (void)writeZone:(void *)arg1 withAccessor:(void *)arg2; // needs 2 arg types, found 7: SCWZoneSchema *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SCWZoneStore> *, void*

@end
