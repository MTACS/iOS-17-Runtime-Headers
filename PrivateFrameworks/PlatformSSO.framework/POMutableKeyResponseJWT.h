
@interface POMutableKeyResponseJWT : POMutableJWT {
    POMutableKeyResponseJWTBody * _body;
}

@property (retain) POMutableKeyResponseJWTBody *body;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (void)setBody:(id)arg1;

@end
