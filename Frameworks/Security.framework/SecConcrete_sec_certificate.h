
@interface SecConcrete_sec_certificate : NSObject <OS_sec_certificate> {
    struct __SecCertificate { } * certificate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1;

@end
