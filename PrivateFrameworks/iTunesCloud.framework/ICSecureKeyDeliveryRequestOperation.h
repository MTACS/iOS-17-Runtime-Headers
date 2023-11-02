
@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation {
    ICSecureKeyDeliveryRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) ICSecureKeyDeliveryRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)_createDefaultProtocolRequestBodyUsingPlaybackContextData:(id)arg1;
- (id)_createPodcastLicenseProtocolRequestBodyUsingPlaybackContextData:(id)arg1;
- (void)_createServerPlaybackContextWithCompletion:(id /* block */)arg1;
- (id)_createSimplifiedProtocolRequestBodyUsingPlaybackContextData:(id)arg1;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
