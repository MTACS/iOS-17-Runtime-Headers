
@interface JPSignatureVerifier : NSObject {
    struct JetPackSignatureVerifier { } * _backing;
    bool  _releaseBackingOnDealloc;
}

@property (nonatomic) struct JetPackSignatureVerifier { }*backing;
@property (nonatomic, readonly) bool releaseBackingOnDealloc;

+ (id)defaultSignatureVerifier;
+ (id)signatureVerifierWithCertificate:(id)arg1;
+ (id)unsafeIgnoreSignatureVerifier;

- (struct JetPackSignatureVerifier { }*)backing;
- (void)dealloc;
- (id)initWithBacking:(struct JetPackSignatureVerifier { }*)arg1 releaseOnDealloc:(bool)arg2;
- (bool)releaseBackingOnDealloc;
- (void)setBacking:(struct JetPackSignatureVerifier { }*)arg1;

@end
