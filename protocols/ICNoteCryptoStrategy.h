
@protocol ICNoteCryptoStrategy <ICCloudSyncingObjectCryptoStrategy>

@required

- (void)decrypt;
- (NSData *)decryptNotePrimitiveData;
- (NSData *)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(CKRecord *)arg1;
- (void)mergeEncryptedData:(NSData *)arg1 mergeConflict:(NSMergeConflict *)arg2;
- (void)writeEncryptedNoteData:(NSData *)arg1;

@end
