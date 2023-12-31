
@interface ICSongDownloadDoneRequest : ICRequestOperation {
    NSString * _downloadIdentifier;
    ICStoreRequestContext * _requestContext;
    unsigned long long  _songID;
    ICStoreURLRequest * _storeURLRequest;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 downloadIdentifier:(id)arg2 songID:(unsigned long long)arg3;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
