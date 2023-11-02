
@protocol XBApplicationSnapshotManifestDelegate

@required

- (void)manifest:(XBApplicationSnapshotManifest *)arg1 didPurgeProtectedContentSnapshotsWithGroupIdentifiers:(NSArray *)arg2;

@end
