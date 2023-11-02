
@interface IMDAttachmentStore : NSObject <AssetStoreProviding, RecordStoreDeleting, RecordStoreProviding>

+ (void)_askToTapToRadarForErrorString:(id)arg1 path:(id)arg2;
+ (bool)_cloudkitSyncingEnabled;
+ (bool)fileEligibleForCacheDelete:(id)arg1;
+ (id)sharedInstance;
+ (bool)updateTransferIn:(id)arg1 fromGUID:(id)arg2 toGUID:(id)arg3;

- (id)_IMTransferGUIDForMessageGUID:(id)arg1 andIndex:(unsigned long long)arg2;
- (void)_hasMarkedAllAttachmentsAsNeedingSync;
- (struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; }*)_loadAttachmentRecordForGUID:(id)arg1;
- (void)_markAllFailedAttachmentsAsNeedingSync;
- (void)_markAttachmentWithROWIDAsFailedToUploadToCloudKit:(id)arg1;
- (void)_markTransferAsNotBeingAbleToSyncWithGUID:(id)arg1;
- (void)_needsToMarkAllAttachmentsAsNeedingSync;
- (id)_newFileTransferFromIMDAttachmentRecordRef:(struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; }*)arg1;
- (void)_reindexMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeTransferFromiCloudBackupWithGuid:(id)arg1;
- (void)_resetAttachmentSyncStateForGUID:(id)arg1 newSyncState:(long long)arg2;
- (bool)_shouldEarlyReturnForWrongItemType:(id)arg1;
- (bool)_shouldMarkAllAttachmentsAsNeedingSync;
- (bool)_shouldMarkAttachmentsAsNeedingReupload;
- (bool)_updateAttachmentGUID:(id)arg1 withGUID:(id)arg2;
- (id)_updateAttachmentGUIDIfNeededAndReturnTransfersToForceMarkAsSync:(id)arg1 transfersToSyncRowIDs:(id)arg2;
- (bool)_updateLegacyTransferGUIDOn:(id)arg1 andUpdateMessageIfNeeded:(id)arg2 transfersToSync:(id)arg3;
- (id)_updatedMessageBody:(id)arg1 replacingGuid:(id)arg2 withGuid:(id)arg3;
- (id)attachmentWithGUID:(id)arg1;
- (id)attachmentsFilteredUsingPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (id)attachmentsWithGUIDs:(id)arg1;
- (id)batchOfRecordIDsToDeleteWithLimit:(long long)arg1 error:(id*)arg2;
- (id)batchOfRecordsMissingAssetsWithLimit:(long long)arg1;
- (id)batchOfRecordsToWriteWithLimit:(long long)arg1 error:(id*)arg2;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)clearTombstonesForRecordIDs:(id)arg1;
- (id)database;
- (bool)deleteAttachmentDataForTransfer:(id)arg1;
- (void)deleteAttachmentSyncToken;
- (bool)deleteAttachmentWithGUID:(id)arg1;
- (void)deleteAttachmentsDirectWithPredicate:(id)arg1;
- (bool)deleteAttachmentsForMessage:(id)arg1;
- (bool)deleteAttachmentsWithGUIDs:(id)arg1;
- (id)fileTransferWithAttachmentRecordRef:(struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; }*)arg1;
- (bool)isSafeToDeleteAttachmentAtPath:(id)arg1;
- (void)legacyImport:(id)arg1;
- (void)markAllAttachmentsAsNeedingCloudKitSync;
- (void)markAllAttachmentsAsNotPurgeable;
- (void)markAttachment:(id)arg1 purgeable:(bool)arg2;
- (void)markAttachmentPurgeable:(id)arg1;
- (void)markAttachmentUnpurgeable:(id)arg1;
- (void)markFile:(id)arg1 asPurgeable:(bool)arg2;
- (void)markTransferAsNotSuccessfullyDownloadedWithGUID:(id)arg1;
- (void)recordUpdateFailedWithID:(id)arg1 localGUID:(id)arg2 error:(id)arg3;
- (void)recordUpdateSucceededWithRecord:(id)arg1;
- (bool)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2;
- (void)resetLocalSyncStateIfAppropriate;
- (void)setSyncStatusForGUIDs:(id)arg1 toStatus:(long long)arg2;
- (bool)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2;
- (bool)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2 chatGUID:(id)arg3 storeAtExternalLocation:(bool)arg4;
- (id)syncTokenStore;
- (void)updateAssetUsingRecord:(id)arg1;
- (bool)updateAttachment:(id)arg1;
- (bool)updateAttachment:(id)arg1 chatGUID:(id)arg2 storeAtExternalPath:(bool)arg3;
- (bool)updateLegacyTransferGUIDIfNeeded:(id)arg1 transfersToSync:(id)arg2;
- (bool)updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1;

@end
