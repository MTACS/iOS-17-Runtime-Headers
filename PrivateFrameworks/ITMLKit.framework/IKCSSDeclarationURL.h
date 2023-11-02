
@interface IKCSSDeclarationURL : IKCSSDeclaration {
    NSURL * _value;
}

@property (nonatomic, retain) NSURL *value;

- (void).cxx_destruct;
- (id)description;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;
- (void)setValue:(id)arg1;
- (id)stringValue;
- (id)value;

@end
