
@interface MPMediaAPICollectionItemMetadataRequest : NSObject <MPMediaAPIMetadaRequestProtocol> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSMutableArray * _failedItemIdentifiers;
    bool  _isCancelled;
    bool  _isSparseRequest;
    NSMutableArray * _itemIDsForRequest;
    NSString * _personID;
    NSProgress * _progress;
    ICMusicKitRequestContext * _requestContext;
    NSUUID * _requestIdentifier;
    long long  _requestItemCount;
    <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> * _trustProvider;
    NSObject<OS_dispatch_queue> * _workQueue;
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
- (void)_fetchContainerItemMetadataForBatch:(id)arg1 progressHandler:(id /* block */)arg2;
- (id)_getNextBatchBatch;
- (void)_notifyBatchProgressWithResponseDictionary:(id)arg1 tokenHalfLifeDuration:(double)arg2 error:(id)arg3 finalResponse:(bool)arg4 progressHandler:(id /* block */)arg5;
- (void)_resolveRequestItemsWithSOD:(id)arg1;
- (void)cancelRequest;
- (void)executeRequestWithBatchProgressHandler:(id /* block */)arg1;
- (id)initWithItemIdentifiers:(id)arg1 personID:(id)arg2 requestContext:(id)arg3 sparseRequest:(bool)arg4 trustProvider:(id)arg5;
- (id)progress;
- (id)requestIdentifier;
- (long long)requestItemCount;
- (bool)shouldResolveRequestItemsLocally;

@end
