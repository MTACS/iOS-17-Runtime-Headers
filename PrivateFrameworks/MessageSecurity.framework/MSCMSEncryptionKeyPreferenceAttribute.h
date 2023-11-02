
@interface MSCMSEncryptionKeyPreferenceAttribute : NSObject <MSCMSAttributeCoder> {
    struct __SecCertificate { } * _encryptionCertificate;
    bool  _legacyASN1Encoding;
}

@property (readonly, retain) MSOID *attributeType;
@property (readonly) struct __SecCertificate { }*encryptionCertificate;
@property bool legacyASN1Encoding;

- (id)attributeType;
- (void)dealloc;
- (id)encodeAttributeWithError:(id*)arg1;
- (struct __SecCertificate { }*)encryptionCertificate;
- (id)initWithAttribute:(id)arg1 certificates:(id)arg2 LAContext:(id)arg3 error:(id*)arg4;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1;
- (bool)legacyASN1Encoding;
- (void)setLegacyASN1Encoding:(bool)arg1;

@end
