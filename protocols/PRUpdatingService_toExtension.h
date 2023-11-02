
@protocol PRUpdatingService_toExtension <NSObject>

@required

- (void)captureSnapshotForRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: PRPosterSnapshotRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PRPosterSnapshotterResult *, NSError *, void*
- (oneway void)updateConfiguration:(void *)arg1 sessionInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PRSPosterPath *, PRSPosterUpdateSessionInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PRSPosterPathsAssertion *, NSError *, void*
- (oneway void)updateDescriptors:(void *)arg1 sessionInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, PRSPosterUpdateSessionInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PRSPosterPathsAssertion *, NSError *, void*

@end
