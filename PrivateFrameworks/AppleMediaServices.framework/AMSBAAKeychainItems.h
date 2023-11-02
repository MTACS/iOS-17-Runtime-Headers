
@interface AMSBAAKeychainItems : NSObject {
    NSData * _BAACert;
    struct __SecKey { } * _BIKKeyRef;
    NSData * _IntermediateRootCert;
}

@property (copy) NSData *BAACert;
@property struct __SecKey { }*BIKKeyRef;
@property (copy) NSData *IntermediateRootCert;

- (void).cxx_destruct;
- (id)BAACert;
- (struct __SecKey { }*)BIKKeyRef;
- (id)IntermediateRootCert;
- (void)setBAACert:(id)arg1;
- (void)setBIKKeyRef:(struct __SecKey { }*)arg1;
- (void)setIntermediateRootCert:(id)arg1;

@end
