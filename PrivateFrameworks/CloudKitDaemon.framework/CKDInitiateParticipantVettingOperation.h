
@interface CKDInitiateParticipantVettingOperation : CKDOperation {
    NSString * _address;
    NSData * _encryptedKey;
    NSString * _participantID;
    id /* block */  _participantVettingProgressBlock;
    CKShareMetadata * _shareMetadata;
}

@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) <CKInitiateParticipantVettingOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSData *encryptedKey;
@property (nonatomic, retain) NSString *participantID;
@property (nonatomic, copy) id /* block */ participantVettingProgressBlock;
@property (nonatomic, retain) CKShareMetadata *shareMetadata;

- (void).cxx_destruct;
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id*)arg3;
- (id)_encryptedKeyDataWithShareMetadata:(id)arg1 error:(id*)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleVettingInitiationProgress:(id)arg1;
- (void)_sendRequest:(bool)arg1;
- (id)activityCreate;
- (id)address;
- (id)encryptedKey;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (int)operationType;
- (id)participantID;
- (id /* block */)participantVettingProgressBlock;
- (void)setAddress:(id)arg1;
- (void)setEncryptedKey:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setParticipantVettingProgressBlock:(id /* block */)arg1;
- (void)setShareMetadata:(id)arg1;
- (id)shareMetadata;

@end
