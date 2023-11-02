
@protocol CKFetchRecordVersionsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleFetchForRecordID:(CKRecordID *)arg1 isDeleted:(bool)arg2 versions:(NSArray *)arg3 error:(NSError *)arg4;

@end
