
@interface APOdmlReranker : NSObject {
    APOdmlAssetManager * _assetManager;
    unsigned long long  _ident;
    bool  _isPersonalizedAdsEnabled;
    NSArray * _originalAds;
    unsigned long long  _placementType;
    NSObject<OS_dispatch_group> * _rerankDispatchGroup;
    id /* block */  _rerankResponse;
    APOdmlUnfairLock * _rerankResponseLock;
    NSArray * _rerankedAds;
    NSError * _rerankerError;
    NSDate * _rerankingStartDate;
}

@property (nonatomic, retain) APOdmlAssetManager *assetManager;
@property (nonatomic, readonly) unsigned long long ident;
@property (nonatomic, readonly) bool isPersonalizedAdsEnabled;
@property (nonatomic, retain) NSArray *originalAds;
@property (nonatomic) unsigned long long placementType;
@property (readonly) NSObject<OS_dispatch_group> *rerankDispatchGroup;
@property (nonatomic, copy) id /* block */ rerankResponse;
@property (nonatomic, retain) APOdmlUnfairLock *rerankResponseLock;
@property (nonatomic, retain) NSArray *rerankedAds;
@property (retain) NSError *rerankerError;
@property (nonatomic, retain) NSDate *rerankingStartDate;

+ (id)rerankResponseTimeoutQueue;
+ (id)rerankSerialQueue;

- (void).cxx_destruct;
- (void)_handleError:(long long)arg1;
- (id)assetManager;
- (void)getRerankedAdsWithTimeLimit:(double)arg1 completion:(id /* block */)arg2;
- (unsigned long long)ident;
- (id)init;
- (id)initWithPersonalizedAdsEnabled:(bool)arg1 assetManager:(id)arg2 placementType:(unsigned long long)arg3;
- (id)initWithPersonalizedAdsEnabled:(bool)arg1 placementType:(unsigned long long)arg2;
- (bool)isPersonalizedAdsEnabled;
- (id)originalAds;
- (unsigned long long)placementType;
- (id)predictAndExplore:(id)arg1;
- (id)rerankDispatchGroup;
- (id /* block */)rerankResponse;
- (id)rerankResponseLock;
- (void)rerankResponseTimeout;
- (id)rerankedAds;
- (id)rerankerError;
- (id)rerankingStartDate;
- (bool)sendRerankResponseIfAvailable:(id)arg1 error:(id)arg2;
- (void)setAndRerankAds:(id)arg1;
- (void)setAssetManager:(id)arg1;
- (void)setOriginalAds:(id)arg1;
- (void)setPlacementType:(unsigned long long)arg1;
- (void)setRerankResponse:(id /* block */)arg1;
- (void)setRerankResponseLock:(id)arg1;
- (void)setRerankedAds:(id)arg1;
- (void)setRerankerError:(id)arg1;
- (void)setRerankingStartDate:(id)arg1;

@end
