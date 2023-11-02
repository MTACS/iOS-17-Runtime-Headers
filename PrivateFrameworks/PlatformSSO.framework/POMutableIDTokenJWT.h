
@interface POMutableIDTokenJWT : POMutableJWT {
    POMutableIDTokenJWTBody * _body;
}

@property (retain) POMutableIDTokenJWTBody *body;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (void)setBody:(id)arg1;

@end
