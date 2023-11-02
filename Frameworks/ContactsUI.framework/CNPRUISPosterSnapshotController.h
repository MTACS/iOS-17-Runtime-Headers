
@interface CNPRUISPosterSnapshotController : NSObject

- (void)acquireKeepActiveAssertionForReason:(id)arg1;
- (void)executeSnapshotRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)latestSnapshotBundleForRequest:(id)arg1 error:(out id*)arg2;
- (void)releaseKeepActiveAssertionForReason:(id)arg1;
- (id)sharedController;

@end
