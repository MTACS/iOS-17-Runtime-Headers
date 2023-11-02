
@interface ICMusicSubscriptionPlaybackURLRequest : ICStoreURLRequest {
    NSString * _assetSourceStorefrontID;
    NSString * _cloudUniversalLibraryID;
    bool  _delegatedPlayback;
    NSData * _leaseAssetIDData;
    NSData * _leaseCertificateData;
    NSString * _playbackAuthorizationToken;
    long long  _requestType;
    unsigned long long  _storeCloudID;
    long long  _storePurchasedAdamID;
    long long  _storeSubscriptionAdamID;
}

@property (nonatomic, copy) NSString *assetSourceStorefrontID;
@property (nonatomic, copy) NSString *cloudUniversalLibraryID;
@property (getter=isDelegatedPlayback, nonatomic) bool delegatedPlayback;
@property (nonatomic, copy) NSData *leaseAssetIDData;
@property (nonatomic, copy) NSData *leaseCertificateData;
@property (nonatomic, copy) NSString *playbackAuthorizationToken;
@property (nonatomic) long long requestType;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;

- (void).cxx_destruct;
- (id)_actionType;
- (id)_analyticSignature;
- (void)_populateItemIdentifiers:(id)arg1;
- (id)assetSourceStorefrontID;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)cloudUniversalLibraryID;
- (id)description;
- (bool)isDelegatedPlayback;
- (id)leaseAssetIDData;
- (id)leaseCertificateData;
- (id)playbackAuthorizationToken;
- (long long)requestType;
- (void)setAssetSourceStorefrontID:(id)arg1;
- (void)setCloudUniversalLibraryID:(id)arg1;
- (void)setDelegatedPlayback:(bool)arg1;
- (void)setLeaseAssetIDData:(id)arg1;
- (void)setLeaseCertificateData:(id)arg1;
- (void)setPlaybackAuthorizationToken:(id)arg1;
- (void)setRequestType:(long long)arg1;
- (void)setStoreCloudID:(unsigned long long)arg1;
- (void)setStorePurchasedAdamID:(long long)arg1;
- (void)setStoreSubscriptionAdamID:(long long)arg1;
- (unsigned long long)storeCloudID;
- (long long)storePurchasedAdamID;
- (long long)storeSubscriptionAdamID;

@end
