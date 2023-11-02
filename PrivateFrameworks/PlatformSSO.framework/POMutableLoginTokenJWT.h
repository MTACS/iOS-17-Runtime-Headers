
@interface POMutableLoginTokenJWT : POMutableJWT {
    POMutableLoginJWTBody * _body;
}

@property (retain) POMutableLoginJWTBody *body;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (void)setBody:(id)arg1;

@end
