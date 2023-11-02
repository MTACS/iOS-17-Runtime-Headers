
@interface CKDCompleteParticipantVettingOperation : CKDOperation {
    NSString * _baseToken;
    NSString * _displayedHostname;
    NSData * _encryptedKey;
    NSString * _routingKey;
    CKShareMetadata * _shareMetadata;
    NSString * _shortToken;
    id /* block */  _verifyProgressShareMetadataFetchedBlock;
    id /* block */  _verifyProgressURLReconstructedBlock;
    NSString * _vettingEmail;
    NSString * _vettingPhone;
    NSString * _vettingToken;
}

@property (nonatomic, readonly) NSString *baseToken;
@property (nonatomic, retain) <CKCompleteParticipantVettingOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, readonly) NSString *displayedHostname;
@property (nonatomic, readonly) NSData *encryptedKey;
@property (nonatomic, readonly) NSString *routingKey;
@property (nonatomic, retain) CKShareMetadata *shareMetadata;
@property (nonatomic, retain) NSString *shortToken;
@property (nonatomic) unsigned long long state;
@property (nonatomic, copy) id /* block */ verifyProgressShareMetadataFetchedBlock;
@property (nonatomic, copy) id /* block */ verifyProgressURLReconstructedBlock;
@property (nonatomic, readonly) NSString *vettingEmail;
@property (nonatomic, readonly) NSString *vettingPhone;
@property (nonatomic, readonly) NSString *vettingToken;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_forceFetchShareMetadata;
- (void)_performAuthKitVerification;
- (void)_reconstructShareURL;
- (void)_reconstructShortToken;
- (void)_verifyOONParticipant;
- (id)activityCreate;
- (id)baseToken;
- (id)displayedHostname;
- (id)encryptedKey;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)routingKey;
- (void)setShareMetadata:(id)arg1;
- (void)setShortToken:(id)arg1;
- (void)setVerifyProgressShareMetadataFetchedBlock:(id /* block */)arg1;
- (void)setVerifyProgressURLReconstructedBlock:(id /* block */)arg1;
- (id)shareMetadata;
- (id)shortSharingTokenFromData:(id)arg1;
- (id)shortSharingTokenFromFullToken:(id)arg1;
- (id)shortToken;
- (id /* block */)verifyProgressShareMetadataFetchedBlock;
- (id /* block */)verifyProgressURLReconstructedBlock;
- (id)vettingEmail;
- (id)vettingPhone;
- (id)vettingToken;

@end
