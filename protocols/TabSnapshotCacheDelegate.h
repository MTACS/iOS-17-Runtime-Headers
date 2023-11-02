
@protocol TabSnapshotCacheDelegate <TabSnapshotCacheObserving>

@required

- (unsigned long long)capacityForTabSnapshotCache:(TabSnapshotCache *)arg1;
- (NSSet *)snapshotsToPersistOnDiskForTabSnapshotCache:(TabSnapshotCache *)arg1;
- (void)tabSnapshotCache:(void *)arg1 requestSnapshotWithIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: TabSnapshotCache *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (bool)tabSnapshotCache:(TabSnapshotCache *)arg1 shouldRequestSavedSnapshotWithIdentifier:(NSUUID *)arg2;
- (bool)tabSnapshotCacheShouldDeferNextSnapshotRequest:(TabSnapshotCache *)arg1;

@end
