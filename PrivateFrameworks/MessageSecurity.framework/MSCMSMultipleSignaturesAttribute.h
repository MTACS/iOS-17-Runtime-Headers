
@interface MSCMSMultipleSignaturesAttribute : NSObject <MSCMSAttributeCoder> {
    MSAlgorithmIdentifier * _bodyHashAlgorithm;
    MSCMSSignerInfo * _containingSignerInfo;
    MSAlgorithmIdentifier * _signatureAlgorithm;
    NSData * _signedAttrsHash;
    MSAlgorithmIdentifier * _signedAttrsHashAlgorithm;
}

@property (readonly, retain) MSOID *attributeType;
@property (nonatomic, retain) MSAlgorithmIdentifier *bodyHashAlgorithm;
@property (nonatomic) MSCMSSignerInfo *containingSignerInfo;
@property (nonatomic, retain) MSAlgorithmIdentifier *signatureAlgorithm;
@property (nonatomic) NSData *signedAttrsHash;
@property (nonatomic, retain) MSAlgorithmIdentifier *signedAttrsHashAlgorithm;

- (void).cxx_destruct;
- (id)attributeType;
- (id)bodyHashAlgorithm;
- (id)containingSignerInfo;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)init;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (void)setBodyHashAlgorithm:(id)arg1;
- (void)setContainingSignerInfo:(id)arg1;
- (void)setSignatureAlgorithm:(id)arg1;
- (void)setSignedAttrsHash:(id)arg1;
- (void)setSignedAttrsHashAlgorithm:(id)arg1;
- (id)signatureAlgorithm;
- (id)signedAttrsHash;
- (id)signedAttrsHashAlgorithm;

@end
