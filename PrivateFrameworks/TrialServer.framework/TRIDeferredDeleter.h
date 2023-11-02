
@interface TRIDeferredDeleter : NSObject {
    NSString * _rootDir;
}

+ (bool)_createSymlinkIfNonExistentAtPath:(id)arg1 withDestinationPath:(id)arg2;
+ (bool)_removeDeferredDeletedItemWithLink:(id)arg1 externalReferenceStore:(id)arg2 wasDeleted:(bool*)arg3;

- (void).cxx_destruct;
- (bool)_cleanupWithLinksDirLockWitness:(struct TRIFlockWitness_ { int x1; }*)arg1 externalReferenceStore:(id)arg2;
- (id)_collectRelativeLinkPathsWithLinksDirLockWitness:(struct TRIFlockWitness_ { int x1; }*)arg1;
- (id)_deferredDeletedLinksDir;
- (id)_linkPathForDeferredDeletedItemAtPath:(id)arg1;
- (bool)collectGarbageWithRootDirLockWitness:(struct TRIFlockWitness_ { int x1; }*)arg1 externalReferenceStore:(id)arg2;
- (id)initForRootDir:(id)arg1;
- (bool)markItemAtRelativePath:(id)arg1;
- (bool)unmarkItemAtRelativePath:(id)arg1;

@end
