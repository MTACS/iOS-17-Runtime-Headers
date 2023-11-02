
@interface SUUIJSImageColorAnalyzer : IKJSObject <SUUIArtworkRequestDelegate, SUUIJSImageColorAnalyzer> {
    NSMutableDictionary * _artworkRequestIDsToManagedCallbacks;
    SUUIClientContext * _clientContext;
    NSOperationQueue * _operationQueue;
    SUUIResourceLoader * _resourceLoader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)analyzeImageAtUrl:(id)arg1 :(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;

@end
