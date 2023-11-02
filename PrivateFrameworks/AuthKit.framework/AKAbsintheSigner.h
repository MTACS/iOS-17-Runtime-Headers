
@interface AKAbsintheSigner : NSObject {
    struct NACContextOpaque_ { } * _context;
    NSDate * _contextCreationDate;
}

+ (id)sharedSigner;

- (void).cxx_destruct;
- (void)_createSigningContextWithCompletionHandler:(id /* block */)arg1;
- (void)_destroySigningContext;
- (bool)_didSigningContextExpire;
- (void)_establishSessionWithInfo:(id)arg1 sessionURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_generateSignatureForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_sessionInfoFromCertificateData:(id)arg1;
- (void)dealloc;
- (id)signatureForURLRequest:(id)arg1;
- (void)signatureForURLRequest:(id)arg1 completionHandler:(id /* block */)arg2;

@end
