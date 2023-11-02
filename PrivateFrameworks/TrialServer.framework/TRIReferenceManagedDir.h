
@interface TRIReferenceManagedDir : NSObject

+ (struct { unsigned char x1; })_acquireLockOnDir:(id)arg1 withLockingMode:(int)arg2 andRunBlock:(id /* block */)arg3;
+ (id)_collectDeadSymlinksForManagedDir:(id)arg1 withLockWitness:(struct TRIFlockWitness_ { int x1; }*)arg2 liveSymlinkCount:(unsigned int*)arg3;
+ (id)_containingManagedDirForPath:(id)arg1 resolvedAbsPath:(id*)arg2;
+ (bool)_deleteReferenceManagedDirectory:(id)arg1 usingTempDir:(id)arg2 managedDirWasDeleted:(bool*)arg3;
+ (bool)_isTargetOfSymlink:(id)arg1 containedInManagedDir:(id)arg2;
+ (id)_metadataDirForManagedDir:(id)arg1;
+ (bool)_removePaths:(id)arg1 withLockWitness:(struct TRIFlockWitness_ { int x1; }*)arg2 numRemoved:(unsigned int*)arg3;
+ (id)_reverseLinksDirForManagedDir:(id)arg1;
+ (bool)_testDeletionEligibilityForManagedDir:(id)arg1 withExternalReferenceStore:(id)arg2 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg3 logPrefix:(id)arg4 isEligible:(bool*)arg5;
+ (bool)collectDeferredDeletionItemsWithManagedDir:(id)arg1;
+ (bool)collectGarbageForManagedDir:(id)arg1 withExternalReferenceStore:(id)arg2 usingTempDir:(id)arg3 managedDirWasDeleted:(bool*)arg4;
+ (bool)createFromDir:(id)arg1;
+ (bool)isPathInManagedDir:(id)arg1;
+ (bool)removeFileInManagedDirWithPath:(id)arg1 inUseDeletionBehavior:(unsigned char)arg2 wasDeleted:(bool*)arg3;
+ (bool)saveFromGarbageCollectionItemWithPath:(id)arg1;
+ (bool)symlinkFromCurrentPath:(id)arg1 withFuturePath:(id)arg2 toManagedPath:(id)arg3;
+ (bool)symlinkFromPath:(id)arg1 toManagedPath:(id)arg2;

- (id)init;

@end
