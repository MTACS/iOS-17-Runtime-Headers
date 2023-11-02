
@interface IKCSSDeclarationDouble : IKCSSDeclaration {
    double  _value;
}

@property double value;

- (id)description;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;
- (void)setValue:(double)arg1;
- (id)stringValue;
- (double)value;

@end
