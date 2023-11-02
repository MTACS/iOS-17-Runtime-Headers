
@interface MSCMSSignedData : NSObject <MSCMSMessage> {
    NSMutableSet * _certificates;
    bool  _contentChanged;
    MSOID * _contentType;
    NSData * _dataContent;
    bool  _detached;
    NSSet * _digestAlgorithms;
    <MSCMSMessage> * _embeddedContent;
    MSDecodeOptions * _options;
    NSArray * _signers;
    NSNumber * _version;
}

@property (retain) NSMutableSet *certificates;
@property bool contentChanged;
@property (retain) MSOID *contentType;
@property (nonatomic, retain) NSData *dataContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool detached;
@property (retain) NSSet *digestAlgorithms;
@property (retain) <MSCMSMessage> *embeddedContent;
@property (readonly) unsigned long long hash;
@property (retain) MSDecodeOptions *options;
@property (retain) NSArray *signers;
@property (readonly) Class superclass;
@property (readonly) MSOID *type;
@property (retain) NSNumber *version;

+ (id)decodeMessageSecurityObject:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)isImplementedInObjectiveC;

- (void).cxx_destruct;
- (bool)addCertificatesForSigner:(id)arg1 mode:(unsigned long long)arg2 error:(id*)arg3;
- (void)addCounterSignerCertificates:(id)arg1 mode:(unsigned long long)arg2 error:(id*)arg3;
- (void)addDigestAlgorithmFromSigner:(id)arg1;
- (void)addSigner:(id)arg1;
- (void)addSigner:(id)arg1 withCertificates:(id)arg2;
- (bool)addSigner:(id)arg1 withChainMode:(unsigned long long)arg2 error:(id*)arg3;
- (id)calculateContentDigestWithAlgorithm:(id)arg1 error:(id*)arg2;
- (id)certificates;
- (bool)checkSignedPerRFC5652:(id*)arg1;
- (bool)contentChanged;
- (id)contentType;
- (id)dataContent;
- (bool)detached;
- (id)digestAlgorithms;
- (id)embeddedContent;
- (id)encodeMessageSecurityObject:(id*)arg1;
- (struct __SecCertificate { }*)getSignerCertificate:(unsigned long long)arg1 error:(id*)arg2;
- (id)initCertsOnlyWithCertificates:(id)arg1 error:(id*)arg2;
- (id)initWithDataContent:(id)arg1 isDetached:(bool)arg2 signer:(id)arg3 additionalCertificates:(id)arg4 error:(id*)arg5;
- (id)initWithDataContent:(id)arg1 isDetached:(bool)arg2 signer:(id)arg3 error:(id*)arg4;
- (id)initWithDataContent:(id)arg1 isDetached:(bool)arg2 signer:(id)arg3 signerChainMode:(unsigned long long)arg4 error:(id*)arg5;
- (id)initWithEmbeddedContent:(id)arg1 signer:(id)arg2 additionalCertificates:(id)arg3 error:(id*)arg4;
- (id)initWithEmbeddedContent:(id)arg1 signer:(id)arg2 error:(id*)arg3;
- (id)initWithEmbeddedContent:(id)arg1 signer:(id)arg2 signerChainMode:(unsigned long long)arg3 error:(id*)arg4;
- (id)options;
- (void)removeSignerCertificatesWithIndexes:(id)arg1;
- (void)removeSignersWithCertificate:(struct __SecCertificate { }*)arg1 error:(id*)arg2;
- (void)removeSignersWithEmailAddress:(id)arg1 error:(id*)arg2;
- (void)removeSignersWithIdentity:(struct __SecIdentity { }*)arg1 error:(id*)arg2;
- (void)removeSignersWithIndexes:(id)arg1 error:(id*)arg2;
- (void)setCertificates:(id)arg1;
- (void)setContentChanged:(bool)arg1;
- (void)setContentType:(id)arg1;
- (void)setDataContent:(id)arg1;
- (void)setDetached:(bool)arg1;
- (void)setDigestAlgorithms:(id)arg1;
- (void)setEmbeddedContent:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setSigners:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)signers;
- (id)type;
- (bool)verifySignatures:(id*)arg1;
- (bool)verifySignaturesAndSignersWithPolicies:(id)arg1 verifyTime:(id)arg2 anchorCertificates:(id)arg3 error:(id*)arg4;
- (bool)verifySignaturesAndSignersWithPolicies:(id)arg1 verifyTime:(id)arg2 error:(id*)arg3;
- (id)version;

@end