
@interface IKCSSDeclarationInteger : IKCSSDeclaration {
    long long  _value;
}

@property long long value;

- (id)description;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;
- (void)setValue:(long long)arg1;
- (id)stringValue;
- (long long)value;

@end
