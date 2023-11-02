
@interface MPMediaAPICollectionItemAuthTokenRenewalRequest : NSObject <MPMediaAPIMetadaRequestProtocol> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSMutableArray * _failedItemIdentifiers;
    bool  _isCancelled;
    NSMutableArray * _itemIdentifiersForRequest;
    NSString * _personID;
    NSProgress * _progress;
    ICMusicKitRequestContext * _requestContext;
    NSUUID * _requestIdentifier;
    long long  _requestItemCount;
    MPPropertySet * _requestPropertySet;
    <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> * _trustProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly, copy) NSUUID *requestIdentifier;
@property (nonatomic, readonly) long long requestItemCount;
@property (nonatomic, readonly) bool shouldResolveRequestItemsLocally;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getNextBatchBatch;
- (id)_itemIDsFromRequestIdentifiers;
- (void)_notifyBatchProgressWithResponseDictionary:(id)arg1 tokenHalfLifeDuration:(double)arg2 error:(id)arg3 finalResponse:(bool)arg4 progressHandler:(id /* block */)arg5;
- (void)_renewPlaybackAuthorizationTokensForBatch:(id)arg1 progressHandler:(id /* block */)arg2;
- (void)_resolveRequestItemsWithSOD:(id)arg1;
- (void)cancelRequest;
- (void)executeRequestWithBatchProgressHandler:(id /* block */)arg1;
- (id)initWithItemIdentifiers:(id)arg1 personID:(id)arg2 requestContext:(id)arg3 trustProvider:(id)arg4;
- (id)progress;
- (id)requestIdentifier;
- (long long)requestItemCount;
- (bool)shouldResolveRequestItemsLocally;

@end
