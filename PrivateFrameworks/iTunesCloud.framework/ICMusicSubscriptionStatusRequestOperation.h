
@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation {
    bool  _allowsFuseHeaderEnrichment;
    ICMusicSubscriptionStatusRequest * _request;
    id /* block */  _responseHandler;
    bool  _shouldRequestLightweightStatus;
}

@property (nonatomic) bool allowsFuseHeaderEnrichment;
@property (nonatomic, readonly, copy) ICMusicSubscriptionStatusRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) bool shouldRequestLightweightStatus;

- (void).cxx_destruct;
- (void)_cacheAccountEligibilityWithStatus:(id)arg1 requestContext:(id)arg2;
- (bool)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg1;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(bool)arg3 completion:(id /* block */)arg4;
- (bool)allowsFuseHeaderEnrichment;
- (void)execute;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (id /* block */)responseHandler;
- (void)setAllowsFuseHeaderEnrichment:(bool)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setShouldRequestLightweightStatus:(bool)arg1;
- (bool)shouldRequestLightweightStatus;

@end
