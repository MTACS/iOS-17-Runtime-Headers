
@interface ADPersonalizedAdsStatusManager : ADSingleton {
    NSNumber * _pendingJingleRequestToken;
    bool  _sendingPersonalizedAdsToAdPlatforms;
}

@property (nonatomic, copy) NSNumber *pendingJingleRequestToken;
@property (nonatomic) bool sendingPersonalizedAdsToAdPlatforms;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)pendingJingleRequestToken;
- (void)sendPersonalizedAdsStatusToAdPlatforms:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)sendingPersonalizedAdsToAdPlatforms;
- (void)setPendingJingleRequestToken:(id)arg1;
- (void)setSendingPersonalizedAdsToAdPlatforms:(bool)arg1;

@end
