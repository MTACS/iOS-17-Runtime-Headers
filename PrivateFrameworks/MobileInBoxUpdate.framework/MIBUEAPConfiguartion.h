
@interface MIBUEAPConfiguartion : NSObject {
    NSArray * _tlsCertificateChain;
    struct __SecKey { } * _tlsKey;
}

@property (nonatomic, copy) NSArray *tlsCertificateChain;
@property (nonatomic, readonly) struct __SecKey { }*tlsKey;

- (void).cxx_destruct;
- (id)init;
- (void)setTLSKey:(struct __SecKey { }*)arg1;
- (void)setTlsCertificateChain:(id)arg1;
- (id)tlsCertificateChain;
- (struct __SecKey { }*)tlsKey;

@end
