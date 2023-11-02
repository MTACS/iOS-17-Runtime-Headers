
@interface LegacySigningKeyPrivate : NSObject {
    id  _secKeyRef;
}

@property (nonatomic, retain) id secKeyRef;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)init;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)publicKey;
- (id)secKeyRef;
- (void)setSecKeyRef:(id)arg1;
- (id)signData:(id)arg1 error:(id*)arg2;

@end
