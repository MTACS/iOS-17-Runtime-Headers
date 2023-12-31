
@interface ICPushNotificationsRegisterAPNSTokenRequest : ICRequestOperation {
    ICStoreRequestContext * _requestContext;
    ICPushNotificationsResponse * _response;
    NSData * _token;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 token:(id)arg2;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
