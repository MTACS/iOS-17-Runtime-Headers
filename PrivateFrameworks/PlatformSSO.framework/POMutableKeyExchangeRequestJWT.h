
@interface POMutableKeyExchangeRequestJWT : POMutableJWT {
    POMutableKeyExchangeRequestJWTBody * _body;
}

@property (retain) POMutableKeyExchangeRequestJWTBody *body;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (void)setBody:(id)arg1;

@end
