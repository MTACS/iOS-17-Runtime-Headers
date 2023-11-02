
@interface CKCompleteParticipantVettingOperation : CKOperation <CKCompleteParticipantVettingOperationCallbacks> {
    NSString * _baseToken;
    id /* block */  _completeParticipantVettingCompletionBlock;
    NSString * _displayedHostname;
    NSData * _encryptedKey;
    NSURL * _reconstructedShareURL;
    NSString * _routingKey;
    CKShareMetadata * _shareMetadata;
    NSString * _vettingEmail;
    NSString * _vettingPhone;
    NSString * _vettingToken;
}

@property (nonatomic, copy) NSString *baseToken;
@property (nonatomic, readonly) <CKCompleteParticipantVettingOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ completeParticipantVettingCompletionBlock;
@property (nonatomic, copy) NSString *displayedHostname;
@property (nonatomic, copy) NSData *encryptedKey;
@property (nonatomic, readonly) CKCompleteParticipantVettingOperationInfo *operationInfo;
@property (nonatomic, copy) NSURL *reconstructedShareURL;
@property (nonatomic, copy) NSString *routingKey;
@property (nonatomic, retain) CKShareMetadata *shareMetadata;
@property (nonatomic, copy) NSString *vettingEmail;
@property (nonatomic, copy) NSString *vettingPhone;
@property (nonatomic, copy) NSString *vettingToken;

+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)baseToken;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id /* block */)completeParticipantVettingCompletionBlock;
- (id)displayedHostname;
- (id)encryptedKey;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleFetchedShareMetadata:(id)arg1;
- (void)handleReconstructedShareURL:(id)arg1;
- (id)init;
- (id)initWithVettingToken:(id)arg1 vettingRecord:(id)arg2 displayedHostname:(id)arg3;
- (id)reconstructedShareURL;
- (id)routingKey;
- (void)setBaseToken:(id)arg1;
- (void)setCompleteParticipantVettingCompletionBlock:(id /* block */)arg1;
- (void)setDisplayedHostname:(id)arg1;
- (void)setEncryptedKey:(id)arg1;
- (void)setReconstructedShareURL:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setShareMetadata:(id)arg1;
- (void)setVettingEmail:(id)arg1;
- (void)setVettingPhone:(id)arg1;
- (void)setVettingToken:(id)arg1;
- (id)shareMetadata;
- (id)vettingEmail;
- (id)vettingPhone;
- (id)vettingToken;

@end
