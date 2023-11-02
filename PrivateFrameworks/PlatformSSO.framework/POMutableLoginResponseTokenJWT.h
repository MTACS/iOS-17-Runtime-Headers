
@interface POMutableLoginResponseTokenJWT : POMutableJWT {
    POLoginResponseJWTBody * _body;
}

@property (retain) POLoginResponseJWTBody *body;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (void)setBody:(id)arg1;

@end
