
@interface MBFileSystemManager : NSObject

+ (bool)_createSnapshotForVolumeFd:(int)arg1 volumeMountPoint:(id)arg2 name:(id)arg3 error:(id*)arg4 cancelationHandler:(id /* block */)arg5;
+ (id)_deleteFileSystemSnapshots:(id)arg1 block:(id /* block */)arg2;
+ (bool)_mountSnapshotForVolumeFd:(int)arg1 volumeMountPoint:(id)arg2 name:(id)arg3 mountPoint:(id)arg4 error:(id*)arg5;
+ (id)createAndMountSnapshotForVolume:(id)arg1 name:(id)arg2 atFirstAvailableMountPoint:(id)arg3 error:(id*)arg4 cancelationHandler:(id /* block */)arg5;
+ (bool)createSnapshotForVolume:(id)arg1 name:(id)arg2 error:(id*)arg3 cancelationHandler:(id /* block */)arg4;
+ (bool)deleteAllSnapshotsForVolume:(id)arg1 withPrefix:(id)arg2 error:(id*)arg3;
+ (bool)deleteAllSnapshotsForVolume:(id)arg1 withPrefix:(id)arg2 latestCreationDate:(id)arg3 error:(id*)arg4;
+ (bool)deleteSnapshotForVolume:(id)arg1 name:(id)arg2 error:(id*)arg3;
+ (id)fetchAllAPFSVolumeMountPoints;
+ (unsigned long long)fileSystemCapacity;
+ (id)listSnapshotsForVolume:(id)arg1 error:(id*)arg2;
+ (bool)mountSnapshotForVolume:(id)arg1 name:(id)arg2 mountPoint:(id)arg3 error:(id*)arg4;
+ (void)removeDeviceTransferDirectoryWithEarliestCreationDate:(id)arg1;
+ (void)removeDriveBackupSnapshotsWithLatestCreationDate:(id)arg1;
+ (bool)renameSnapshotForVolume:(id)arg1 name:(id)arg2 newName:(id)arg3 error:(id*)arg4;
+ (bool)startFilesystemKeyRollingWithPath:(id)arg1 error:(id*)arg2;
+ (bool)stopFilesystemKeyRollingWithPath:(id)arg1 error:(id*)arg2;
+ (bool)unmount:(id)arg1 error:(id*)arg2;
+ (bool)unmountAndDeleteSnapshotForVolume:(id)arg1 name:(id)arg2 mountPoint:(id)arg3 error:(id*)arg4;
+ (bool)unmountAndRenameSnapshotForVolume:(id)arg1 name:(id)arg2 mountPoint:(id)arg3 newName:(id)arg4 error:(id*)arg5;
+ (id)volumeMountPointForFile:(id)arg1 error:(id*)arg2;
+ (bool)volumeSupportsLocalSnapshots:(id)arg1;
+ (id)volumeUUIDWithVolumeMountPoint:(id)arg1 error:(id*)arg2;

@end
