
@interface WBSRetryableCKFetchShareMetadataOperation : WBSRetryableCKOperation {
    id /* block */  _fetchShareMetadataCompletionBlock;
    id /* block */  _perShareMetadataBlock;
    NSArray * _rootRecordDesiredKeys;
    NSDictionary * _shareInvitationTokensByShareURL;
    NSArray * _shareURLs;
    bool  _shouldFetchRootRecord;
}

@property (nonatomic, copy) id /* block */ fetchShareMetadataCompletionBlock;
@property (nonatomic, copy) id /* block */ perShareMetadataBlock;
@property (nonatomic, copy) NSArray *rootRecordDesiredKeys;
@property (nonatomic, copy) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic, copy) NSArray *shareURLs;
@property (nonatomic) bool shouldFetchRootRecord;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)arg1;
- (id /* block */)fetchShareMetadataCompletionBlock;
- (id /* block */)perShareMetadataBlock;
- (id)rootRecordDesiredKeys;
- (void)setFetchShareMetadataCompletionBlock:(id /* block */)arg1;
- (void)setPerShareMetadataBlock:(id /* block */)arg1;
- (void)setRootRecordDesiredKeys:(id)arg1;
- (void)setShareInvitationTokensByShareURL:(id)arg1;
- (void)setShareURLs:(id)arg1;
- (void)setShouldFetchRootRecord:(bool)arg1;
- (id)shareInvitationTokensByShareURL;
- (id)shareURLs;
- (bool)shouldFetchRootRecord;

@end
