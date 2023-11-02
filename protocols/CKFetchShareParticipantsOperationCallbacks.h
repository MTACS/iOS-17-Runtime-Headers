
@protocol CKFetchShareParticipantsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleShareParticipantFetchForLookupInfo:(CKUserIdentityLookupInfo *)arg1 shareParticipant:(CKShareParticipant *)arg2 error:(NSError *)arg3;

@end
