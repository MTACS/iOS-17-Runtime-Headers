
@interface IKCSSSimpleParseBlock : IKCSSParseBlock {
    long long  _associatedToken;
}

@property (nonatomic) long long associatedToken;

- (long long)associatedToken;
- (id)description;
- (id)init;
- (void)setAssociatedToken:(long long)arg1;

@end
