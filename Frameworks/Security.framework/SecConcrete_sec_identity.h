
@interface SecConcrete_sec_identity : NSObject <OS_sec_identity> {
    struct __CFArray { } * certs;
    id /* block */  decrypt_block;
    struct __SecIdentity { } * identity;
    NSObject<OS_dispatch_queue> * operation_queue;
    id /* block */  sign_block;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCertificates:(struct __CFArray { }*)arg1 signBlock:(id /* block */)arg2 decryptBlock:(id /* block */)arg3 queue:(id)arg4;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1;
- (id)initWithIdentityAndCertificates:(struct __SecIdentity { }*)arg1 certificates:(struct __CFArray { }*)arg2;

@end
