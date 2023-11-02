
@interface IMDPersistentAttachmentController : NSObject

+ (id)sharedInstance;

- (bool)_canDeleteAttachmentPath:(id)arg1;
- (bool)_deleteAttachmentForTransfer:(id)arg1 highQuality:(bool)arg2;
- (id)_migrateSiblingAssetsInAttachmentStoreWithOriginalPath:(id)arg1 destinationPath:(id)arg2 withFileManager:(id)arg3;
- (id)_persistentPathForTransfer:(id)arg1 filename:(id)arg2 highQuality:(bool)arg3 chatGUID:(id)arg4 storeAtExternalPath:(bool)arg5;
- (void)_removeLegacyAttachmentPathsInAttachmentStoreWithOriginalPath:(id)arg1 withFileManager:(id)arg2;
- (id)_saveAttachmentForTransfer:(id)arg1 highQuality:(bool)arg2 copyWithinAttachmentStore:(bool)arg3;
- (id)_saveAttachmentForTransfer:(id)arg1 highQuality:(bool)arg2 copyWithinAttachmentStore:(bool)arg3 chatGUID:(id)arg4 storeAtExternalPath:(bool)arg5;
- (bool)_shouldDeleteOriginalPath:(id)arg1 copyWithinAttachmentStore:(bool)arg2 destPath:(id)arg3 storeAtExternalPath:(bool)arg4;
- (bool)cleanseOrphanedFileTransfers;
- (bool)deleteAttachmentsForTransfer:(id)arg1;
- (bool)isSafeToDeleteAttachmentPath:(id)arg1;
- (void)moveAttachmentsForTransfer:(id)arg1 completion:(id /* block */)arg2;
- (void)saveAttachmentsForTransfer:(id)arg1 chatGUID:(id)arg2 storeAtExternalLocation:(bool)arg3 completion:(id /* block */)arg4;
- (void)saveAttachmentsForTransfer:(id)arg1 completion:(id /* block */)arg2;

@end
