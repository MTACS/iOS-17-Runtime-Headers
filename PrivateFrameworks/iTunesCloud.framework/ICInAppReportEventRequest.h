
@interface ICInAppReportEventRequest : ICRequestOperation {
    NSString * _messageIdentifier;
    NSDictionary * _params;
    ICStoreRequestContext * _storeRequestContext;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStoreRequestContext:(id)arg1 messageIdentifier:(id)arg2 params:(id)arg3;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
