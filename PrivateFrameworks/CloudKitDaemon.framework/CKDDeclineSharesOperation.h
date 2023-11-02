
@interface CKDDeclineSharesOperation : CKDDatabaseOperation {
    NSMutableDictionary * _clientProvidedMetadatasByURL;
    id /* block */  _declineCompletionBlock;
    NSMutableArray * _shareURLsToDecline;
}

@property (nonatomic, retain) <CKDeclineSharesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSMutableDictionary *clientProvidedMetadatasByURL;
@property (nonatomic, copy) id /* block */ declineCompletionBlock;
@property (nonatomic, retain) NSMutableArray *shareURLsToDecline;
@property (nonatomic) unsigned long long state;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_declineShares;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleShareURLDeclined:(id)arg1 responseCode:(id)arg2;
- (void)_performCallbackForURL:(id)arg1 error:(id)arg2;
- (id)activityCreate;
- (id)clientProvidedMetadatasByURL;
- (id /* block */)declineCompletionBlock;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (int)operationType;
- (void)setClientProvidedMetadatasByURL:(id)arg1;
- (void)setDeclineCompletionBlock:(id /* block */)arg1;
- (void)setShareURLsToDecline:(id)arg1;
- (id)shareURLsToDecline;

@end
