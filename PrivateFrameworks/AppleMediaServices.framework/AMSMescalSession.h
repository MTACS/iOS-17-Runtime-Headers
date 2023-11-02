
@interface AMSMescalSession : NSObject {
    NSData * _certificateData;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    AMSMescalFairPlay * _fairPlayContext;
    long long  _mescalType;
    AMSURLSession * _urlSession;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)defaultSession;
+ (id)primeSession;
+ (id)sessionWithType:(long long)arg1;

- (void).cxx_destruct;
- (bool)_cacheCertData:(id)arg1 expiration:(double)arg2;
- (id)_cachedCertData;
- (id)_cachedCertPath;
- (id)_establishContextWithBag:(id)arg1 error:(id*)arg2;
- (id)_loadCertificateDataWithBag:(id)arg1 error:(id*)arg2;
- (id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id*)arg3;
- (void)_resetSession;
- (bool)_shouldRetryFairPlayForError:(id)arg1;
- (bool)_verifyEntitlements;
- (id)dispatchQueue;
- (id)initWithType:(long long)arg1;
- (id)primeSignatureForData:(id)arg1 bag:(id)arg2 error:(id*)arg3;
- (id)signData:(id)arg1 bag:(id)arg2 error:(id*)arg3;
- (bool)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id*)arg4;
- (bool)verifyPrimeSignature:(id)arg1 error:(id*)arg2;

@end
