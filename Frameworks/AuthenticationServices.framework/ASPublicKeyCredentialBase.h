
@interface ASPublicKeyCredentialBase : NSObject <ASPublicKeyCredential> {
    long long  _attachment;
    NSData * _credentialID;
    NSData * _rawClientDataJSON;
}

@property (nonatomic) long long attachment;
@property (nonatomic, readonly, copy) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *rawClientDataJSON;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)attachment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialID:(id)arg1 rawClientDataJSON:(id)arg2 attachment:(long long)arg3;
- (id)rawClientDataJSON;
- (void)setAttachment:(long long)arg1;

@end
