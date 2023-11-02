
@interface POMutableKeyExchangeResponseJWT : POMutableJWT {
    POMutableKeyExchangeResponseJWTBody * _body;
}

@property (retain) POMutableKeyExchangeResponseJWTBody *body;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (void)setBody:(id)arg1;

@end
