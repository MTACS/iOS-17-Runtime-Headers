
@interface IKCSSDeclarationPoint : IKCSSDeclaration {
    unsigned long long  _unit;
    double  _value;
}

@property (nonatomic) unsigned long long unit;
@property (nonatomic) double value;

- (id)description;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;
- (id)number;
- (void)setUnit:(unsigned long long)arg1;
- (void)setValue:(double)arg1;
- (id)stringValue;
- (unsigned long long)unit;
- (double)value;

@end
