
@interface LPAPFSVolume : LPMedia

+ (void)_loadMountPointTableForMode:(int)arg1;
+ (id)defaultMountPointGivenRole:(int)arg1;
+ (id)defaultVolumeNameGivenRole:(int)arg1;
+ (void)initialize;
+ (id)supportedContentTypes;

- (id)_createTemporaryMountPointWithError:(id*)arg1;
- (id)container;
- (bool)createSnapshot:(id)arg1 error:(id*)arg2;
- (bool)deleteSnapshots:(id)arg1 waitForDeletionFor:(double)arg2 error:(id*)arg3;
- (bool)deleteVolumeWithError:(id*)arg1;
- (bool)eraseVolumeWithError:(id*)arg1;
- (bool)isCaseSenstive;
- (bool)isEncrypted;
- (bool)isFilevaultEncrypted;
- (bool)isMounted;
- (bool)mountAtPath:(id)arg1 error:(id*)arg2;
- (bool)mountAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)mountAtTemporaryPathWithError:(id*)arg1;
- (id)mountAtTemporaryPathWithOptions:(id)arg1 error:(id*)arg2;
- (bool)mountWithError:(id*)arg1;
- (id)pairedVolume;
- (bool)renameSnapshot:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (bool)revertToSnapshot:(id)arg1 error:(id*)arg2;
- (bool)revertToSnapshot:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (int)role;
- (bool)rootToSnapshot:(id)arg1 error:(id*)arg2;
- (bool)setRole:(int)arg1 withError:(id*)arg2;
- (id)snapshotInfoWithError:(id*)arg1;
- (id)snapshotMountPoints;
- (id)snapshotsWithError:(id*)arg1;
- (bool)unmountAllWithError:(id*)arg1;
- (bool)unmountWithError:(id*)arg1;
- (bool)unmountWithOptions:(id)arg1 error:(id*)arg2;
- (id)volumeGroupUUID;

@end
