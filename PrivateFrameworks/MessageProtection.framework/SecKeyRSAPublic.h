
@interface SecKeyRSAPublic : NSObject {
    id  _secKeyRef;
}

@property (nonatomic, retain) id secKeyRef;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)encryptData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithSecKeyRef:(id)arg1;
- (id)secKeyRef;
- (void)setSecKeyRef:(id)arg1;

@end
