
@interface ICLightweightMusicSubscriptionStatusRequest : ICRequestOperation {
    ICStoreRequestContext * _requestContext;
    ICLightweightMusicSubscriptionStatusResponse * _response;
}

@property (nonatomic, copy) ICStoreRequestContext *requestContext;

- (void).cxx_destruct;
- (void)_finishWithExtendedSubscriptionStatusResponse:(id)arg1 error:(id)arg2;
- (void)execute;
- (id)initWithRequestContext:(id)arg1;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;
- (id)requestContext;
- (void)setRequestContext:(id)arg1;

@end
