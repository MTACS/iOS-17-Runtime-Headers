
@interface MPMediaAPICollectionMetadataRequest : NSObject <MPMediaAPIMetadaRequestProtocol> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    long long  _collectionType;
    bool  _isCancelled;
    NSProgress * _progress;
    ICMusicKitRequestContext * _requestContext;
    NSUUID * _requestIdentifier;
    NSString * _requestObjectStoreIdentifier;
    NSString * _storeItemID;
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
- (void)_fetchContainerItemMetadataWithBatchProgressHandler:(id /* block */)arg1;
- (void)_notifyBatchProgressWithResponseDictionary:(id)arg1 tokenHalfLifeDuration:(double)arg2 error:(id)arg3 finalResponse:(bool)arg4 progressHandler:(id /* block */)arg5;
- (void)cancelRequest;
- (void)executeRequestWithBatchProgressHandler:(id /* block */)arg1;
- (id)initWithStoreID:(id)arg1 collectionType:(long long)arg2 requestContext:(id)arg3;
- (id)progress;
- (id)requestIdentifier;
- (long long)requestItemCount;
- (bool)shouldResolveRequestItemsLocally;

@end
