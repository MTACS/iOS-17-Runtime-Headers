
@protocol PBFPosterSnapshotIngesting

@required

- (bool)ingestSnapshotCollection:(PRSPosterSnapshotCollection *)arg1 forConfiguration:(PRPosterConfiguration *)arg2 error:(out id*)arg3;

@end
