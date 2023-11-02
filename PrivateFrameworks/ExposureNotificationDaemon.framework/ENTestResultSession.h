
@interface ENTestResultSession : NSObject {
    NSURLSession * _URLSession;
    NSUUID * _UUID;
    NSArray * _acceptedReportTypes;
    NSString * _agencyAPIKey;
    NSURL * _certificateURL;
    NSString * _healthAuthorityID;
    unsigned long long  _maxRetryTime;
    ENTestResultNetworkRequest * _networkRequest;
    NSString * _nonce;
    ENTestResultPersistentSession * _persistentSession;
    NSObject<OS_dispatch_queue> * _queue;
    ENRegion * _region;
    long long  _state;
    NSURL * _uploadURL;
    NSString * _verificationCode;
    NSMutableArray * _verificationCompletions;
    NSURL * _verificationURL;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSArray *acceptedReportTypes;
@property (nonatomic, readonly, copy) NSString *agencyAPIKey;
@property (nonatomic, readonly, copy) NSURL *certificateURL;
@property (nonatomic, readonly, copy) NSString *healthAuthorityID;
@property (nonatomic) unsigned long long maxRetryTime;
@property (nonatomic, readonly, copy) NSString *nonce;
@property (nonatomic, readonly, copy) ENRegion *region;
@property (nonatomic, readonly, copy) NSURL *uploadURL;
@property (nonatomic, readonly, copy) NSString *verificationCode;
@property (nonatomic, readonly, copy) NSURL *verificationURL;

+ (id)sessionWithVerificationCode:(id)arg1 configuration:(id)arg2 maxRetryTime:(unsigned long long)arg3 nonce:(id)arg4 URLSession:(id)arg5 queue:(id)arg6 error:(id*)arg7;

- (void).cxx_destruct;
- (id)UUID;
- (bool)_checkInvalidatedAndReturnError:(id*)arg1;
- (void)_flushVerificationCompletionsWithError:(id)arg1;
- (id)_initWithAgencyAPIKey:(id)arg1 certificateURL:(id)arg2 acceptedReportTypes:(id)arg3 healthAuthorityID:(id)arg4 maxRetryTime:(unsigned long long)arg5 nonce:(id)arg6 queue:(id)arg7 region:(id)arg8 uploadURL:(id)arg9 URLSession:(id)arg10 verificationCode:(id)arg11 verifyURL:(id)arg12;
- (void)_performCertificateRequestWithToken:(id)arg1 temporaryExposureKeys:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_performUploadRequestWithTemporaryExposureKeys:(id)arg1 revisionToken:(id)arg2 certificate:(id)arg3 HMACKey:(id)arg4 userMetadata:(id)arg5 completionHandler:(id /* block */)arg6;
- (bool)_performVerificationRequestWithError:(id*)arg1;
- (id)acceptedReportTypes;
- (id)agencyAPIKey;
- (id)certificateURL;
- (void)dealloc;
- (id)getMetadataAndReturnError:(id*)arg1;
- (id)getUploadingTemporaryExposureKeys;
- (id)healthAuthorityID;
- (void)invalidate;
- (unsigned long long)maxRetryTime;
- (id)nonce;
- (id)region;
- (void)setMaxRetryTime:(unsigned long long)arg1;
- (void)uploadTemporaryExposureKeys:(id)arg1 revisionToken:(id)arg2 userMetadata:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)uploadURL;
- (id)verificationCode;
- (id)verificationURL;
- (void)verifyCodeWithCompletionHandler:(id /* block */)arg1;

@end
