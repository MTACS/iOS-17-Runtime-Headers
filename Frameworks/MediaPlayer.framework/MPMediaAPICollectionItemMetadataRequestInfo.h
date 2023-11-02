
@interface MPMediaAPICollectionItemMetadataRequestInfo : NSObject {
    NSArray * _collectionItemRequests;
    NSArray * _collectionRequests;
    NSArray * _tokenRenewalRequests;
    unsigned long long  _totalRequestItemCount;
}

@property (nonatomic, readonly, copy) NSArray *collectionItemRequests;
@property (nonatomic, readonly, copy) NSArray *collectionRequests;
@property (nonatomic, readonly, copy) NSArray *tokenRenewalRequests;
@property (nonatomic, readonly) unsigned long long totalRequestItemCount;

- (void).cxx_destruct;
- (id)collectionItemRequests;
- (id)collectionRequests;
- (id)initWithMediaAPICollectionItemMetadataRequests:(id)arg1 collectionMetadataRequest:(id)arg2 authTokenRenewalRequests:(id)arg3 totalItemRequestCount:(unsigned long long)arg4;
- (id)tokenRenewalRequests;
- (unsigned long long)totalRequestItemCount;

@end
