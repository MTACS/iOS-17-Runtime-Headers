
@interface MTROperationalCSRInfo : NSObject {
    NSData * _attestationSignature;
    NSData * _csr;
    NSData * _csrElementsTLV;
    NSData * _csrNonce;
}

@property (nonatomic, readonly, copy) NSData *attestationSignature;
@property (nonatomic, readonly, copy) NSData *csr;
@property (nonatomic, readonly, copy) NSData *csrElementsTLV;
@property (nonatomic, readonly, copy) NSData *csrNonce;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_initWithValidatedCSR:(id)arg1 csrNonce:(id)arg2 csrElementsTLV:(id)arg3 attestationSignature:(id)arg4;
- (id)attestationSignature;
- (id)csr;
- (id)csrElementsTLV;
- (id)csrNonce;
- (id)initWithCSR:(id)arg1 csrNonce:(id)arg2 csrElementsTLV:(id)arg3 attestationSignature:(id)arg4;
- (id)initWithCSRElementsTLV:(id)arg1 attestationSignature:(id)arg2;
- (id)initWithCSRNonce:(id)arg1 csrElementsTLV:(id)arg2 attestationSignature:(id)arg3;
- (id)initWithCSRResponseParams:(id)arg1;

@end
