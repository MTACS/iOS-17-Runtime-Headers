
@protocol TabSnapshotCacheObserving <NSObject>

@required

- (void)tabSnapshotCache:(TabSnapshotCache *)arg1 didCacheSnapshotWithIdentifier:(NSUUID *)arg2;
- (void)tabSnapshotCache:(TabSnapshotCache *)arg1 didEvictSnapshotWithIdentifier:(NSUUID *)arg2;
- (void)tabSnapshotCacheDidFinishUpdating:(TabSnapshotCache *)arg1;

@end
