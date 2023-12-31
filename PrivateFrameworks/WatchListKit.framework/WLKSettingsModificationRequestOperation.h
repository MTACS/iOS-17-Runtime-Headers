
@interface WLKSettingsModificationRequestOperation : WLKNetworkRequestOperation {
    NSDictionary * _modifications;
}

+ (id)_requestURL:(id*)arg1;

- (void).cxx_destruct;
- (id)_postBody;
- (id)initWithModifications:(id)arg1;
- (void)prepareURLRequest:(id /* block */)arg1;

@end
