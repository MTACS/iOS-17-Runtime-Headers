
@interface CloudKit.LoadingRequestHandler : NSObject <AVAssetResourceLoaderDelegate> {
    void activity;
    void assetStreamHandle;
    void taskByRequest;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  type;
}

- (void).cxx_destruct;
- (id)init;
- (void)resourceLoader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;

@end
