
@interface UMLManager : NSObject {
    UMLUserManifest * _manifest;
    UMLSideEffects * _se;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)addNewUser:(id)arg1 toUserManifest:(id)arg2 saveToPath:(id)arg3;
- (bool)createPrimaryUserLayoutWithOnUserVolumePath:(id)arg1 fromSystemVolumePath:(id)arg2 withError:(id*)arg3;
- (id)createPrimaryUserOnSharedDataVolumePath:(id)arg1 withError:(id*)arg2;
- (bool)createUserLayoutForUserwithUserID:(int)arg1 withAKSSetup:(bool)arg2 onUserVolumePath:(id)arg3 fromSystemVolumePath:(id)arg4 withError:(id*)arg5;
- (id)loadManifestFromSharedDataVolumePath:(id)arg1;
- (id)readUserManifestOnSharedDataVolumePath:(id)arg1 withError:(id*)arg2;
- (bool)removeAnUser:(id)arg1 fromUserManifest:(id)arg2 saveToPath:(id)arg3;
- (bool)saveManifest:(id)arg1 toPath:(id)arg2;
- (bool)updatePrimaryUser:(id)arg1 onSharedDataVolumePath:(id)arg2 withDiskNode:(id)arg3 withVolumeuuid:(id)arg4 withVolumeName:(id)arg5 withError:(id*)arg6;
- (bool)updateUser:(id)arg1 inManifest:(id)arg2 withDiskNode:(id)arg3 volumeUUID:(id)arg4 volumeName:(id)arg5 withSharedDataVolumePath:(id)arg6 withError:(id*)arg7;

@end
