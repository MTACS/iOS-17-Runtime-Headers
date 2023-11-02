
@protocol CKFetchRecordsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleAssetDataForRecordID:(CKRecordID *)arg1 recordKey:(NSString *)arg2 arrayIndex:(long long)arg3 data:(NSData *)arg4 offset:(unsigned long long)arg5;
- (void)handleFetchForRecordID:(CKRecordID *)arg1 didProgress:(double)arg2;
- (void)handleFetchForRecordID:(CKRecordID *)arg1 record:(CKRecord *)arg2 error:(NSError *)arg3;

@end
