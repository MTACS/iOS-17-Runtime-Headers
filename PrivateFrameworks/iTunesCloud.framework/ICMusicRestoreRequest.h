
@interface ICMusicRestoreRequest : ICRequestOperation {
    ICStoreRequestContext * _requestContext;
    ICMusicRestoreRequestParameters * _requestParameters;
    ICMediaRedownloadResponse * _response;
    ICStoreURLRequest * _storeURLRequest;
}

- (void).cxx_destruct;
- (id)_serializedBodyDataWithAccountID:(id)arg1;
- (void)cancel;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 parameters:(id)arg2;
- (void)performRestoreRequestWithCompletionHandler:(id /* block */)arg1;

@end
