
@interface SPRKeyAttestationRequest : NSObject <SPRDERRepresentable> {
    NSData * _derRepresentation;
    NSData * _publicKeyInfo;
}

@property (readonly, copy) NSData *derRepresentation;
@property (nonatomic, readonly, copy) NSData *publicKeyInfo;

- (void).cxx_destruct;
- (id)derRepresentation;
- (id)initWithDERRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithPublicKeyInfo:(id)arg1;
- (id)initWithSequence:(const struct { char *x1; unsigned long long x2; }*)arg1 error:(id*)arg2;
- (id)publicKeyInfo;

@end
