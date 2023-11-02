
@protocol PRUISPosterSnapshotCache <BSInvalidatable>

@required

- (bool)cacheSnapshotBundle:(PRPosterSnapshotBundle *)arg1 forRequest:(PRUISPosterSnapshotRequest *)arg2;
- (bool)cacheSnapshotBundle:(void *)arg1 forRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PRPosterSnapshotBundle *, PRUISPosterSnapshotRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)checkCacheIsReachable:(out id*)arg1;
- (void)cleanup;
- (void)discardSnapshotsForPostersMatchingPredicate:(NSPredicate *)arg1;
- (PRPosterSnapshotBundle *)latestSnapshotBundleForRequest:(PRUISPosterSnapshotRequest *)arg1 error:(out id*)arg2;

@end
