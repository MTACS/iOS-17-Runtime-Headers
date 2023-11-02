
@interface ICContentKeyNonceRequest : ICRequestOperation {
    NSNumber * _accountDSID;
    NSNumber * _adamID;
    NSURL * _keyServerURL;
    ICContentKeyNonceResponse * _response;
    ICStoreRequestContext * _storeRequestContext;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStoreRequestContext:(id)arg1 adamID:(id)arg2 accountDSID:(id)arg3 keyServerURL:(id)arg4;
- (void)performWithResponseHandler:(id /* block */)arg1;

@end
