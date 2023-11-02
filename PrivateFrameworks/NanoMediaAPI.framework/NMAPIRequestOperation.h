
@interface NMAPIRequestOperation : MPStoreModelRequestOperation {
    ICURLBag * _storeURLBag;
}

@property (nonatomic, copy) NMAPIRequest *request;

- (void).cxx_destruct;
- (void)_personalizeResponse:(id)arg1 completion:(id /* block */)arg2;
- (id)_readResponseDictionaryFromDisk;
- (void)_writeResponseDictionaryToDisk:(id)arg1;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)arg1 error:(id*)arg2;
- (void)execute;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(id /* block */)arg2;

@end
