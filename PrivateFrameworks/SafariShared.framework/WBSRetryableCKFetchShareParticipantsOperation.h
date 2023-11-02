
@interface WBSRetryableCKFetchShareParticipantsOperation : WBSRetryableCKOperation {
    id /* block */  _fetchShareParticipantsCompletionBlock;
    id /* block */  _perShareParticipantCompletionBlock;
    NSArray * _userIdentityLookupInfos;
}

@property (nonatomic, copy) id /* block */ fetchShareParticipantsCompletionBlock;
@property (nonatomic, copy) id /* block */ perShareParticipantCompletionBlock;
@property (nonatomic, copy) NSArray *userIdentityLookupInfos;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)arg1;
- (id /* block */)fetchShareParticipantsCompletionBlock;
- (id /* block */)perShareParticipantCompletionBlock;
- (void)setFetchShareParticipantsCompletionBlock:(id /* block */)arg1;
- (void)setPerShareParticipantCompletionBlock:(id /* block */)arg1;
- (void)setUserIdentityLookupInfos:(id)arg1;
- (id)userIdentityLookupInfos;

@end
