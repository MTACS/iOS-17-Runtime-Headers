
@interface POIDTokenJWT : POJWT {
    POIDTokenJWTBody * _decodedBody;
}

@property (retain) POIDTokenJWTBody *decodedBody;

- (void).cxx_destruct;
- (id)decodedBody;
- (id)description;
- (id)initWithString:(id)arg1;
- (id)mutableCopy;
- (void)setDecodedBody:(id)arg1;

@end
