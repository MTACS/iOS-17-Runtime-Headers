
@interface POMutableKeyRequestJWT : POMutableJWT {
    POMutableKeyRequestJWTBody * _body;
}

@property (retain) POMutableKeyRequestJWTBody *body;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (void)setBody:(id)arg1;

@end
