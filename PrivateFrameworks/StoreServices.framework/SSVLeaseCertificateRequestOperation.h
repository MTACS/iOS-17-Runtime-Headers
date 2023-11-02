
@interface SSVLeaseCertificateRequestOperation : SSVComplexOperation {
    NSObject<OS_dispatch_semaphore> * _bagLoadSemaphore;
    NSString * _certificateURLBagKey;
    SSVPlaybackLeaseConfiguration * _configuration;
    id /* block */  _outputBlock;
    SSURLBag * _urlBag;
}

@property (copy) NSString *certificateURLBagKey;
@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)_resolveCertificateURLReturningError:(id*)arg1;
- (void)cancel;
- (id)certificateURLBagKey;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithURLBag:(id)arg1;
- (void)main;
- (id /* block */)outputBlock;
- (void)setCertificateURLBagKey:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;

@end
