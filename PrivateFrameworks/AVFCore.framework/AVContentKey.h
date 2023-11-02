
@interface AVContentKey : NSObject {
    struct OpaqueFigCPECryptor { } * _cryptor;
    AVContentKeySpecifier * contentKeySpecifier;
}

@property (readonly) AVContentKeySpecifier *contentKeySpecifier;

+ (id)contentKeyWithSpecifier:(id)arg1 andCryptor:(struct OpaqueFigCPECryptor { }*)arg2;

- (id)contentKeySpecifier;
- (struct OpaqueFigCPECryptor { }*)cryptor;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1 andCryptor:(struct OpaqueFigCPECryptor { }*)arg2;

@end
