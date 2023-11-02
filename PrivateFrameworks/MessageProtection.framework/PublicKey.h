
@interface PublicKey : NSObject {
    <P256PublicKeyProtocol> * _key;
}

@property (retain) <P256PublicKeyProtocol> *key;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)description;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithKey:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;

@end
