
@interface ENChaffTestResultSession : NSObject {
    NSURLSession * _URLSession;
    NSString * _agencyAPIKey;
    NSURL * _certificateURL;
    id /* block */  _completion;
    ENTestResultNetworkRequest * _networkRequest;
    NSObject<OS_dispatch_queue> * _queue;
    ENRegion * _region;
    long long  _state;
    NSURL * _uploadURL;
    NSURL * _verificationURL;
}

@property (nonatomic, readonly, copy) NSString *agencyAPIKey;
@property (nonatomic, readonly, copy) NSURL *certificateURL;
@property (nonatomic, readonly, copy) ENRegion *region;
@property (nonatomic, readonly, copy) NSURL *uploadURL;
@property (nonatomic, readonly, copy) NSURL *verificationURL;

+ (id)sessionWithConfiguration:(id)arg1 URLSession:(id)arg2 queue:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)_callCompletionIfNecessaryWithError:(id)arg1;
- (id)_initWithAgencyAPIKey:(id)arg1 certificateURL:(id)arg2 queue:(id)arg3 region:(id)arg4 uploadURL:(id)arg5 URLSession:(id)arg6 verifyURL:(id)arg7;
- (void)_invalidate;
- (void)_sendCertificateChaffRequest;
- (void)_sendChaffRequestWithURL:(id)arg1 useAPIKey:(bool)arg2 successHandler:(id /* block */)arg3;
- (void)_sendUploadChaffRequest;
- (void)_sendVerificationChaffRequest;
- (id)agencyAPIKey;
- (id)certificateURL;
- (void)dealloc;
- (void)invalidate;
- (id)region;
- (void)sendChaffMessagesWithCompletion:(id /* block */)arg1;
- (id)uploadURL;
- (id)verificationURL;

@end
