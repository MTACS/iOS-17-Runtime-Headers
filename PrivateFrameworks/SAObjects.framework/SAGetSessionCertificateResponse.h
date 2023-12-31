
@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand

@property (nonatomic, copy) NSData *certificate;

+ (id)getSessionCertificateResponse;
+ (id)getSessionCertificateResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)certificate;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCertificate:(id)arg1;

@end
