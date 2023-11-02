
@interface HMBLocalZoneMirrorInput : HMBLocalZoneInput

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

- (id)commitWithOptions:(id)arg1 error:(id*)arg2;
- (bool)stageAdditionForModel:(id)arg1 externalID:(id)arg2 externalData:(id)arg3 error:(id*)arg4;
- (bool)stageRemovalForModelWithExternalID:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (bool)frmSyncCommitWithMirrorInput:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (bool)frmSyncCommitWithOptions:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (bool)frmSyncCommitWithMirrorInput:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (bool)frmSyncCommitWithOptions:(id)arg1 error:(id*)arg2;

@end
