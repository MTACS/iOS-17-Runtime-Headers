
@interface SWSignedPersonIdentityProof : SWPersonIdentityProof {
    NSData * _signatureData;
}

@property (nonatomic, readonly, copy) NSData *signatureData;

- (void).cxx_destruct;
- (id)initWithPersonIdentityProof:(id)arg1 signatureData:(id)arg2;
- (id)signatureData;

@end
