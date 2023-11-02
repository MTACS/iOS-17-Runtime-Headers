
@interface POMutableAssertionTokenJWT : POMutableJWT {
    POMutableAssertionJWTBody * _body;
}

@property (retain) POMutableAssertionJWTBody *body;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (void)setBody:(id)arg1;

@end
