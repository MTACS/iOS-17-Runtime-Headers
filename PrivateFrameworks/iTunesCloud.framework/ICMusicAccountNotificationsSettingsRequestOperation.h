
@interface ICMusicAccountNotificationsSettingsRequestOperation : ICRequestOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _bodyDictionary;
    ICStoreRequestContext * _requestContext;
    long long  _requestMethod;
    ICMusicAccountNotificationsSettingsResponse * _response;
    ICStoreURLRequest * _storeURLRequest;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 withRequestMethod:(long long)arg2;
- (id)initWithRequestContext:(id)arg1 withRequestMethod:(long long)arg2 andBodyDictionary:(id)arg3;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
