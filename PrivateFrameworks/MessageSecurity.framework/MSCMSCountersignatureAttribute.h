
@interface MSCMSCountersignatureAttribute : NSObject <MSCMSAttributeCoder> {
    NSArray * _additionalCertificates;
    unsigned long long  _chainMode;
    MSCMSSignerInfo * _containingSignerInfo;
    NSArray * _signers;
}

@property (retain) NSArray *additionalCertificates;
@property (readonly, retain) MSOID *attributeType;
@property unsigned long long chainMode;
@property (nonatomic) MSCMSSignerInfo *containingSignerInfo;
@property (readonly) NSArray *signers;

- (void).cxx_destruct;
- (void)addSigner:(id)arg1;
- (void)addSigner:(id)arg1 withCertificates:(id)arg2;
- (void)addSigner:(id)arg1 withChainMode:(unsigned long long)arg2 error:(id*)arg3;
- (id)additionalCertificates;
- (id)attributeType;
- (unsigned long long)chainMode;
- (id)containingSignerInfo;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)initWithAttribute:(id)arg1 LAContext:(id)arg2 error:(id*)arg3;
- (id)initWithAttribute:(id)arg1 certificates:(id)arg2 LAContext:(id)arg3 containingSignerInfo:(id)arg4 error:(id*)arg5;
- (id)initWithAttribute:(id)arg1 certificates:(id)arg2 LAContext:(id)arg3 error:(id*)arg4;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithSignerInfo:(id)arg1;
- (id)initWithSignerInfo:(id)arg1 additionalCertificates:(id)arg2;
- (id)initWithSignerInfo:(id)arg1 signerChainMode:(unsigned long long)arg2;
- (id)initWithSignerInfo:(id)arg1 signerChainMode:(unsigned long long)arg2 additionalCertificates:(id)arg3;
- (void)removeSignerCertificatesWithIndexes:(id)arg1;
- (void)removeSignersWithCertificate:(struct __SecCertificate { }*)arg1 error:(id*)arg2;
- (void)removeSignersWithEmailAddress:(id)arg1 error:(id*)arg2;
- (void)removeSignersWithIdentity:(struct __SecIdentity { }*)arg1 error:(id*)arg2;
- (void)removeSignersWithIndexes:(id)arg1 error:(id*)arg2;
- (void)setAdditionalCertificates:(id)arg1;
- (void)setChainMode:(unsigned long long)arg1;
- (void)setContainingSignerInfo:(id)arg1;
- (id)signers;
- (bool)verifyCountersignatures:(id)arg1 error:(id*)arg2;
- (bool)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg1 verifyTime:(id)arg2 anchorCertificates:(id)arg3 signature:(id)arg4 error:(id*)arg5;

@end
