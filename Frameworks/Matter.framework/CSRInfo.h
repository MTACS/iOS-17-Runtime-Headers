
@interface CSRInfo : NSObject {
    NSData * _csr;
    NSData * _elements;
    NSData * _elementsSignature;
    NSData * _nonce;
}

@property (nonatomic, copy) NSData *csr;
@property (nonatomic, copy) NSData *elements;
@property (nonatomic, copy) NSData *elementsSignature;
@property (nonatomic, copy) NSData *nonce;

- (void).cxx_destruct;
- (id)csr;
- (id)elements;
- (id)elementsSignature;
- (id)initWithNonce:(id)arg1 elements:(id)arg2 elementsSignature:(id)arg3 csr:(id)arg4;
- (id)nonce;
- (void)setCsr:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setElementsSignature:(id)arg1;
- (void)setNonce:(id)arg1;

@end
