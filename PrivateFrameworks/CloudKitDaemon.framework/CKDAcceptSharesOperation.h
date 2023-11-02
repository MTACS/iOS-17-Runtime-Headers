
@interface CKDAcceptSharesOperation : CKDDatabaseOperation {
    id /* block */  _acceptCompletionBlock;
    NSMutableArray * _acceptedShareURLsToFetch;
    NSMutableDictionary * _anonymousShareTuplesAcceptAttempted;
    NSMutableArray * _anonymousShareTuplesAccepted;
    NSMutableDictionary * _clientProvidedMetadatasByURL;
    unsigned long long  _numShareAcceptAttempts;
    NSMutableDictionary * _shareMetadatasToAcceptByURL;
    NSMutableArray * _shareURLsToAccept;
}

@property (nonatomic, copy) id /* block */ acceptCompletionBlock;
@property (nonatomic, retain) NSMutableArray *acceptedShareURLsToFetch;
@property (nonatomic, retain) NSMutableDictionary *anonymousShareTuplesAcceptAttempted;
@property (nonatomic, retain) NSMutableArray *anonymousShareTuplesAccepted;
@property (nonatomic, retain) <CKAcceptSharesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSMutableDictionary *clientProvidedMetadatasByURL;
@property (nonatomic) unsigned long long numShareAcceptAttempts;
@property (nonatomic, retain) NSMutableDictionary *shareMetadatasToAcceptByURL;
@property (nonatomic, retain) NSMutableArray *shareURLsToAccept;
@property (nonatomic) unsigned long long state;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_acceptShares;
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id*)arg3;
- (bool)_callingParticipantOONForShareMetadata:(id)arg1;
- (void)_decryptShareMetadata;
- (void)_fetchAcceptedShares;
- (void)_fetchMetadataForShares;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleShareURLAccepted:(id)arg1 forShare:(id)arg2 responseCode:(id)arg3;
- (id)_keySwapForOONParticipant:(id)arg1;
- (void)_performCallbackForURL:(id)arg1 withShare:(id)arg2 error:(id)arg3;
- (void)_prepareShareMetadata;
- (void)_processAnonymousShares;
- (bool)_validateInvitedPCSCanBeDecryptedForShare:(id)arg1;
- (id /* block */)acceptCompletionBlock;
- (id)acceptedShareURLsToFetch;
- (id)activityCreate;
- (id)anonymousShareTuplesAcceptAttempted;
- (id)anonymousShareTuplesAccepted;
- (id)clientProvidedMetadatasByURL;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (unsigned long long)numShareAcceptAttempts;
- (int)operationType;
- (void)setAcceptCompletionBlock:(id /* block */)arg1;
- (void)setAcceptedShareURLsToFetch:(id)arg1;
- (void)setAnonymousShareTuplesAcceptAttempted:(id)arg1;
- (void)setAnonymousShareTuplesAccepted:(id)arg1;
- (void)setClientProvidedMetadatasByURL:(id)arg1;
- (void)setNumShareAcceptAttempts:(unsigned long long)arg1;
- (void)setShareMetadatasToAcceptByURL:(id)arg1;
- (void)setShareURLsToAccept:(id)arg1;
- (id)shareMetadatasToAcceptByURL;
- (id)shareURLsToAccept;
- (unsigned long long)sharingServiceTypeForShareMetadata:(id)arg1;

@end
