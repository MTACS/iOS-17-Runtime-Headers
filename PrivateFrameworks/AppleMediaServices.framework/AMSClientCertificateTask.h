
@interface AMSClientCertificateTask : AMSTask {
    AMSKeychainOptions * _options;
}

@property (nonatomic, readonly, copy) AMSKeychainOptions *options;

- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1;
- (id)options;
- (id)performClientCertChainRequest;

@end
