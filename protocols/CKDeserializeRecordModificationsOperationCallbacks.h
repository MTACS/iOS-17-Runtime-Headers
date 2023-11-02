
@protocol CKDeserializeRecordModificationsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleDeserializationOfSaves:(NSArray *)arg1 deletes:(NSArray *)arg2 error:(NSError *)arg3;

@end
