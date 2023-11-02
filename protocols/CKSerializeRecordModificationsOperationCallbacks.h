
@protocol CKSerializeRecordModificationsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleSerialization:(NSData *)arg1 error:(NSError *)arg2;

@end
