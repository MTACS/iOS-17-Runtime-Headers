
@protocol CKFetchShareParticipantKeyOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleParticipantKeyFetchForRecordID:(CKRecordID *)arg1 participantKey:(NSString *)arg2 error:(NSError *)arg3;

@end
