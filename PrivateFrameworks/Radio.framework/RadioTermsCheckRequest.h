
@interface RadioTermsCheckRequest : RadioRequest {
    unsigned long long  _acceptedTermsVersion;
    SSURLConnectionRequest * _request;
}

@property (nonatomic) unsigned long long acceptedTermsVersion;

- (void).cxx_destruct;
- (unsigned long long)acceptedTermsVersion;
- (void)cancel;
- (void)setAcceptedTermsVersion:(unsigned long long)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
