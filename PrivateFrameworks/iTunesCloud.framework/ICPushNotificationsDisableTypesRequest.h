
@interface ICPushNotificationsDisableTypesRequest : ICRequestOperation {
    NSString * _notificationType;
    ICStoreRequestContext * _requestContext;
    ICPushNotificationsResponse * _response;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 notificationType:(id)arg2;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
