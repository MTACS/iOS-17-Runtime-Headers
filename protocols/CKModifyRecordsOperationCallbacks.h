
@protocol CKModifyRecordsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleDeleteForRecordID:(CKRecordID *)arg1 error:(NSError *)arg2;
- (void)handleRecordIDsInFlight:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleRecordModificationForRecordID:(CKRecordID *)arg1 didProgress:(double)arg2;
- (void)handleRecordUploadForRecordID:(CKRecordID *)arg1 recordKey:(NSString *)arg2 arrayIndex:(long long)arg3 signature:(NSData *)arg4 size:(unsigned long long)arg5 paddedFileSize:(unsigned long long)arg6 uploaded:(bool)arg7 uploadReceipt:(NSString *)arg8 uploadReceiptExpiration:(double)arg9 wrappedAssetKey:(NSData *)arg10 clearAssetKey:(NSData *)arg11 referenceSignature:(NSData *)arg12;
- (void)handleSaveForRecordID:(CKRecordID *)arg1 recordMetadata:(CKRecordXPCMetadata *)arg2 error:(NSError *)arg3;

@end
