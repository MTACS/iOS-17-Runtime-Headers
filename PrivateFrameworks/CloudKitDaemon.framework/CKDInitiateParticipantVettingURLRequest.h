
@interface CKDInitiateParticipantVettingURLRequest : CKDURLRequest {
    NSString * _baseToken;
    NSData * _encryptedKey;
    NSString * _participantID;
    CKRecordID * _shareRecordID;
    id /* block */  _vettingInitiationRequestCompletionBlock;
}

@property (nonatomic, copy) NSString *baseToken;
@property (nonatomic, copy) NSData *encryptedKey;
@property (nonatomic, copy) NSString *participantID;
@property (nonatomic, copy) CKRecordID *shareRecordID;
@property (nonatomic, copy) id /* block */ vettingInitiationRequestCompletionBlock;

- (void).cxx_destruct;
- (id)baseToken;
- (id)encryptedKey;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 shareRecordID:(id)arg2 encryptedKey:(id)arg3 participantID:(id)arg4 baseToken:(id)arg5;
- (id)participantID;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setBaseToken:(id)arg1;
- (void)setEncryptedKey:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setShareRecordID:(id)arg1;
- (void)setVettingInitiationRequestCompletionBlock:(id /* block */)arg1;
- (id)shareRecordID;
- (id /* block */)vettingInitiationRequestCompletionBlock;

@end
