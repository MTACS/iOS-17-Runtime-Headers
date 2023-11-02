
@interface SUPastisOperation : ISOperation {
    NSURL * _certificateUrl;
    NSURL * _keyUrl;
    AVAssetResourceLoadingRequest * _loadingRequest;
}

@property (nonatomic, retain) NSURL *certificateURL;
@property (nonatomic, retain) NSURL *keyURL;
@property (nonatomic, retain) AVAssetResourceLoadingRequest *loadingRequest;

- (id)_getAppCertWithError:(id*)arg1;
- (id)_getCKCForSPC:(id)arg1 URI:(id)arg2 error:(id*)arg3;
- (id)_getURIWithError:(id*)arg1;
- (id)certificateURL;
- (void)dealloc;
- (id)keyURL;
- (id)loadingRequest;
- (void)run;
- (void)setCertificateURL:(id)arg1;
- (void)setKeyURL:(id)arg1;
- (void)setLoadingRequest:(id)arg1;

@end
