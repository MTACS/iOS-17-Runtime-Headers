
@interface IMDMessageAutomaticHistoryDeletion : NSObject

+ (id)_getDirSubDirURLsForDirPath:(id)arg1 error:(id*)arg2;
+ (id)_getFilePathNotDSStore:(id)arg1;
+ (id)_getPathAttributesForPath:(id)arg1;
+ (id)_getiChatFileMetadataForPath:(id)arg1;
+ (void)cleanDatabase;
+ (void)cleanUpOrphanAttachments;
+ (void)deleteAttachmentsAfterDays:(id)arg1;
+ (void)deleteDirectoryAtPath:(id)arg1;
+ (void)deleteJunkMessagesEligibleForPermanentRemovalOldThanDays:(long long)arg1;
+ (void)deleteMessagesAfterDays:(id)arg1;
+ (void)deleteMessagesAndAttachmentsAfterDays:(id)arg1;
+ (void)deleteRecoverableMessagesEligibleForPermanentRemoval;
+ (void)deleteSpolightArchivedFiles;
+ (bool)isDirCreationDateAtPath:(id)arg1 olderThanDays:(long long)arg2;
+ (bool)isFileAtDirPath:(id)arg1 olderThanDays:(long long)arg2;
+ (bool)isFileHeaderDateAtPath:(id)arg1 olderThanDays:(long long)arg2;
+ (bool)isOlderThanDays:(long long)arg1 fromDate:(id)arg2;

@end
