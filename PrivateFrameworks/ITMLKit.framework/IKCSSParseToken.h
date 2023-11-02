
@interface IKCSSParseToken : IKCSSParseObject {
    IKCSSToken * _token;
}

@property (nonatomic, retain) IKCSSToken *token;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)setToken:(id)arg1;
- (id)token;

@end
