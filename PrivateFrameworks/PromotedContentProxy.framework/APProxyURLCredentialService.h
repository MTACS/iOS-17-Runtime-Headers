
@interface APProxyURLCredentialService : NSObject {
    APMescalSigning * _mescalSigningObject;
}

@property (nonatomic, readonly) APMescalSigning *mescalSigningObject;

- (void).cxx_destruct;
- (id)_signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 withPersistence:(unsigned long long)arg3;
- (id)init;
- (id)mescalSigningObject;
- (id)signedCredentialForRequest:(id)arg1 withPersistence:(unsigned long long)arg2;
- (id)signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 request:(id)arg3 withPersistence:(unsigned long long)arg4;
- (id)signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 withPersistence:(unsigned long long)arg3;

@end
