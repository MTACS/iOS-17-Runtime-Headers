
@interface AXSSInterDeviceSecurityHelper : NSObject {
    struct __SecIdentity { } * _cachedAppleIDIdentity;
    NSArray * _cachedCertificateChain;
    NSArray * _cachedSecurityIdentity;
}

- (void).cxx_destruct;
- (struct __SecIdentity { }*)_appleIDIdentity;
- (void)_appleIDsDidChange;
- (id)_certificateChain;
- (void)dealloc;
- (id)init;
- (id)securityIdentity;
- (void)verifyCertificate:(id)arg1 completion:(id /* block */)arg2;

@end
