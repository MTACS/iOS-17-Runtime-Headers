
@protocol PBFPosterSnapshotProviding <NSObject>

@required

- (void)cancelRequests:(NSSet *)arg1 reason:(NSString *)arg2;
- (void)fetchPosterSnapshotForRequest:(void *)arg1 definition:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PBFPosterSnapshotRequest *, PBFPosterSnapshotDefinition *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*
- (UIImage *)posterSnapshotForRequest:(PBFPosterSnapshotRequest *)arg1 definition:(PBFPosterSnapshotDefinition *)arg2 error:(out id*)arg3;
- (void)prewarmSnapshotsForRequests:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)purgeSnapshotCacheForType:(long long)arg1;

@end
