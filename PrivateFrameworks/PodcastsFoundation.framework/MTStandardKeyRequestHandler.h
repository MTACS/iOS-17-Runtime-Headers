
@interface MTStandardKeyRequestHandler : IMBaseStoreService <MTSecureKeyRequestHandler> {
    void requestQueue;
}

+ (id)keyRequestLicenseErrorDomain;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConcurrentOperationCount:(long long)arg1 requestEncodingType:(unsigned long long)arg2;
- (void)loadCertificateDataWithCompletion:(id /* block */)arg1;
- (void)loadKeyDataFor:(id)arg1 account:(id)arg2 completion:(id /* block */)arg3;

@end
