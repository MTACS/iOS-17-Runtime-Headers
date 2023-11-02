
@interface APRKResourceLoaderHelper : NSObject <AVAssetResourceLoaderDelegate> {
    NSMutableDictionary * _activeResourceLoadingRequests;
    <APRKResourceLoaderHelperDelegate> * _delegate;
    NSDictionary * _headersDictionary;
    NSObject<OS_dispatch_queue> * _resourceLoaderQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APRKResourceLoaderHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)forgetAllActiveResourceLoadingRequests;
- (id)init;
- (void)processUnhandledURLResponseWithDictionary:(id)arg1 error:(id*)arg2;
- (void)registerAVURLAsset:(id)arg1;
- (void)resourceLoader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)unregisterAVURLAsset:(id)arg1;

@end
