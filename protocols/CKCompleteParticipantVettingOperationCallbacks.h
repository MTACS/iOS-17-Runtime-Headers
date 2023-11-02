
@protocol CKCompleteParticipantVettingOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleFetchedShareMetadata:(CKShareMetadata *)arg1;
- (void)handleReconstructedShareURL:(NSURL *)arg1;

@end
