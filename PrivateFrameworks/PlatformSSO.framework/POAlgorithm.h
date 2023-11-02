
@interface POAlgorithm : NSObject <POJWTSigningAlgorithm> {
    struct __CFString { } * _algorithm;
    NSString * _algorithmName;
}

@property (readonly) struct __CFString { }*algorithm;
@property (readonly) NSString *algorithmName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)algorithmWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (struct __CFString { }*)algorithm;
- (id)algorithmName;
- (id)initWithSecKeyAlgorithm:(struct __CFString { }*)arg1 algorithmName:(id)arg2;
- (id)signData:(id)arg1 usingKey:(struct __SecKey { }*)arg2;
- (bool)verifySignature:(id)arg1 onData:(id)arg2 usingCertificateString:(id)arg3;
- (bool)verifySignature:(id)arg1 onData:(id)arg2 usingKey:(struct __SecKey { }*)arg3;

@end
