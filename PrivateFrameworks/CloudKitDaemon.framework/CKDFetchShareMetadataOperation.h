
@interface CKDFetchShareMetadataOperation : CKDOperation {
    bool  _clientWillDisplaySystemAcceptPrompt;
    bool  _errorOnOON;
    bool  _forceDSRefetch;
    bool  _overwriteContainerPCSServiceIfManatee;
    NSSet * _rootRecordDesiredKeysSet;
    NSDictionary * _shareInvitationTokensByShareURL;
    id /* block */  _shareMetadataFetchedBlock;
    NSMutableDictionary * _shareTokenMetadatasToFetchByURL;
    NSMutableArray * _shareURLsToFetch;
    bool  _shouldFetchRootRecord;
    bool  _skipShareDecryption;
}

@property (nonatomic, retain) <CKFetchShareMetadataOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) bool clientWillDisplaySystemAcceptPrompt;
@property (nonatomic) bool errorOnOON;
@property (nonatomic) bool forceDSRefetch;
@property (nonatomic) bool overwriteContainerPCSServiceIfManatee;
@property (nonatomic, retain) NSSet *rootRecordDesiredKeysSet;
@property (nonatomic, retain) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic, copy) id /* block */ shareMetadataFetchedBlock;
@property (nonatomic, retain) NSMutableDictionary *shareTokenMetadatasToFetchByURL;
@property (nonatomic, retain) NSMutableArray *shareURLsToFetch;
@property (nonatomic) bool shouldFetchRootRecord;
@property (nonatomic) bool skipShareDecryption;
@property (nonatomic) unsigned long long state;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_continueHandlingFetchedShareMetadata:(id)arg1 shareURL:(id)arg2;
- (void)_continueSharePCSPrepForShareMetadata:(id)arg1 shareURL:(id)arg2;
- (bool)_currentUserIsOONForShareMetadata:(id)arg1;
- (id)_decodeProtectedFullToken:(id)arg1 tokenMetadata:(id)arg2;
- (void)_decryptRootRecordsForShareURL:(id)arg1 withMetadata:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchShortTokenMetadata;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleTokenResolveWithLookupInfo:(id)arg1 shareMetadata:(id)arg2 responseCode:(id)arg3 urlByShortTokenLookupInfos:(id)arg4 tokensToFetchByURL:(id)arg5;
- (void)_performCallbackForURL:(id)arg1 withMetadata:(id)arg2 error:(id)arg3;
- (void)_prepPPPCSDataForDugongShareMetadata:(id)arg1 withInvitationToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_prepareShortTokens;
- (id)activityCreate;
- (bool)clientWillDisplaySystemAcceptPrompt;
- (bool)errorOnOON;
- (bool)forceDSRefetch;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (int)operationType;
- (bool)overwriteContainerPCSServiceIfManatee;
- (id)rootRecordDesiredKeysSet;
- (void)setClientWillDisplaySystemAcceptPrompt:(bool)arg1;
- (void)setErrorOnOON:(bool)arg1;
- (void)setForceDSRefetch:(bool)arg1;
- (void)setOverwriteContainerPCSServiceIfManatee:(bool)arg1;
- (void)setRootRecordDesiredKeysSet:(id)arg1;
- (void)setShareInvitationTokensByShareURL:(id)arg1;
- (void)setShareMetadataFetchedBlock:(id /* block */)arg1;
- (void)setShareTokenMetadatasToFetchByURL:(id)arg1;
- (void)setShareURLsToFetch:(id)arg1;
- (void)setShouldFetchRootRecord:(bool)arg1;
- (void)setSkipShareDecryption:(bool)arg1;
- (id)shareInvitationTokensByShareURL;
- (id /* block */)shareMetadataFetchedBlock;
- (id)shareTokenMetadatasToFetchByURL;
- (id)shareURLsToFetch;
- (bool)shouldFetchRootRecord;
- (bool)skipShareDecryption;

@end
