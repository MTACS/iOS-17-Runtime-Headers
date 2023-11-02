
@interface AttestationInfo : NSObject {
    NSData * _certificationDeclaration;
    NSData * _challenge;
    NSData * _dac;
    NSData * _elements;
    NSData * _elementsSignature;
    NSData * _firmwareInfo;
    NSData * _nonce;
    NSData * _pai;
}

@property (nonatomic, copy) NSData *certificationDeclaration;
@property (nonatomic, copy) NSData *challenge;
@property (nonatomic, copy) NSData *dac;
@property (nonatomic, copy) NSData *elements;
@property (nonatomic, copy) NSData *elementsSignature;
@property (nonatomic, copy) NSData *firmwareInfo;
@property (nonatomic, copy) NSData *nonce;
@property (nonatomic, copy) NSData *pai;

- (void).cxx_destruct;
- (id)certificationDeclaration;
- (id)challenge;
- (id)dac;
- (id)elements;
- (id)elementsSignature;
- (id)firmwareInfo;
- (id)initWithChallenge:(id)arg1 nonce:(id)arg2 elements:(id)arg3 elementsSignature:(id)arg4 dac:(id)arg5 pai:(id)arg6 certificationDeclaration:(id)arg7 firmwareInfo:(id)arg8;
- (id)nonce;
- (id)pai;
- (void)setCertificationDeclaration:(id)arg1;
- (void)setChallenge:(id)arg1;
- (void)setDac:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setElementsSignature:(id)arg1;
- (void)setFirmwareInfo:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPai:(id)arg1;

@end
