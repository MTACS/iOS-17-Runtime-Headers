
@interface POLoginTokenJWT : POJWT {
    POLoginJWTBody * _decodedBody;
}

@property (retain) POLoginJWTBody *decodedBody;

- (void).cxx_destruct;
- (id)decodedBody;
- (id)description;
- (id)initWithString:(id)arg1;
- (id)mutableCopy;
- (void)setDecodedBody:(id)arg1;

@end
