
@interface POAuthenticationProcess : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    NSOperationQueue * _completionQueue;
    bool  _waitForConnectivity;
    POWSTrustProcess * _wstrustProcess;
}

@property (readonly) NSOperationQueue *completionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool waitForConnectivity;
@property (nonatomic, retain) POWSTrustProcess *wstrustProcess;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (void)_performDynamicWSTrustPasswordLoginWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_performEmbeddedAssertionLoginUsingContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_performEncryptedPasswordLoginUsingContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_performPasswordLoginUsingContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_performWSTrustPasswordLoginWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)completionQueue;
- (id)createAuthenticationContextUsingLoginConfiguration:(id)arg1 deviceConfiguration:(id)arg2 userName:(id)arg3;
- (id)createEmbeddedAssertionWithContext:(id)arg1;
- (id)createEmbeddedPasswordAssertionWithContext:(id)arg1;
- (id)createKeyExchangeRequestJWTWithContext:(id)arg1 otherPartyPublicKey:(id)arg2;
- (id)createKeyExchangeRequestWithContext:(id)arg1 jwt:(id)arg2;
- (id)createKeyRequestJWTWithContext:(id)arg1;
- (id)createKeyRequestWithContext:(id)arg1 jwt:(id)arg2;
- (id)createLoginJWTWithContext:(id)arg1 embeddedAssertion:(id)arg2;
- (id)createLoginRequestWithContext:(id)arg1 jwt:(id)arg2;
- (id)createNonceRequestWithContext:(id)arg1;
- (id)createPartyVInfoWithNonce:(id)arg1 apvKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg2;
- (id)createPartyVInfoWithNonce:(id)arg1 prefixData:(id)arg2 apvPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg3;
- (id)createPreAuthenticationRequestWithContext:(id)arg1;
- (id)createRefreshJWTWithContext:(id)arg1;
- (id)createTestMessagesForLoginConfiguration:(id)arg1 certificate:(struct __SecCertificate { }*)arg2;
- (id)createWSTrust13RequestWithContext:(id)arg1;
- (id)createWSTrust2005RequestWithContext:(id)arg1;
- (id)createWSTrustMexRequestWithContext:(id)arg1;
- (void)extractGroupsAndSubUsingAuthorizationWithContext:(id)arg1 tokens:(id)arg2 returningGroups:(id*)arg3 identifier:(id*)arg4 refreshToken:(id*)arg5;
- (id)findAlgorithmForKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)findKey:(id)arg1 inJWKSData:(id)arg2 rootCertificates:(id)arg3;
- (id)init;
- (void)performKeyExchangeRequestUsingContext:(id)arg1 otherPartyPublicKeyData:(id)arg2 completion:(id /* block */)arg3;
- (void)performKeyExchangeRequestWithContext:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)performKeyRequestUsingContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performKeyRequestWithContext:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)performLoginRequestWithContext:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)performLoginWithContext:(id)arg1 loginJWT:(id)arg2 completion:(id /* block */)arg3;
- (void)performNonceRequestWithContext:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)performPasswordLoginUsingContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performPreAuthenticationRequestWithContext:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)performSEPKeyLoginUsingContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performSmartCardLoginUsingContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performTokenRefreshUsingContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performWSTrustAuthenticationRequestWithContext:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)performWSTrustMexRequestWithContext:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)retrieveSigningKeyWithContext:(id)arg1 keyId:(id)arg2 completion:(id /* block */)arg3;
- (void)setWaitForConnectivity:(bool)arg1;
- (void)setWstrustProcess:(id)arg1;
- (bool)validateIdToken:(id)arg1 context:(id)arg2 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg3;
- (bool)validatePartyUInfo:(id)arg1 context:(id)arg2;
- (bool)validatePartyVInfo:(id)arg1 context:(id)arg2 publicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg3;
- (unsigned long long)validateWSTrustAuthenticationResponseWithContext:(id)arg1 response:(id)arg2 returningAssertion:(id*)arg3;
- (bool)validateWSTrustMexResponseWithContext:(id)arg1 response:(id)arg2;
- (bool)waitForConnectivity;
- (id)wstrustProcess;

@end
