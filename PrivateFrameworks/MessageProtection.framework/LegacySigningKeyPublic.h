
@interface LegacySigningKeyPublic : NSObject {
    id  _secKeyRef;
}

@property (nonatomic, retain) id secKeyRef;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)secKeyRef;
- (void)setSecKeyRef:(id)arg1;
- (bool)verifySignature:(id)arg1 ofData:(id)arg2;

@end
